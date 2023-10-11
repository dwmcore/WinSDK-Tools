"use strict";

//**************************************************************************
// CodeFlow.js:
//
// Uses the ApiExtension Code library to perform analysis about data flow
// within a function.
//
// Usage: !dflow <address>
//
//     Disassembles the function containing <address>, finds any instruction
//     in the control flow which influences the source operands of the instruction
//     at <address> and adds such instruction to the output collection.
//
// @TODO:
// 
//     - !dflow should be able to work without any symbolic information given a range
//       of assembly instructions to consider for the analysis
//

var __diagLevel = 0; // 1 is most important, increasingly less

function __diag(level)
{
    return (level <= __diagLevel);
}

class __TraceDataFlow
{
    constructor(disassembler, functionDisassembly, address)
    {
        this.__disassembler = disassembler;
        this.__functionDisassembly = functionDisassembly;
        this.__address = address;
    }

    toString()
    {
        var instr = this.__disassembler.DisassembleInstructions(this.__address).First();

        var str = "Traced data flow of " + this.__address.toString(16) + ": " + instr +") for source operands { ";
        var first = true;
        for (var operand of instr.Operands)
        {
            if (operand.Attributes.IsInput)
            {
                if (!first)
                {
                    str += ", ";
                }
                first = false;
                str += operand;
            }
        }
        str += " }";

        return str;
    }

    // __findBasicBlock:
    //
    // Finds a basic block containing the instruction at the given address.
    //
    __findBasicBlock(address)
    {
        var predicate = function(b) { return (address.compareTo(b.StartAddress) >= 0 && address.compareTo(b.EndAddress) < 0); } 
        return this.__functionDisassembly.BasicBlocks.First(predicate);
    }

    // __dumpRegisterSet:
    //
    // Diagnostic method to dump a register set.
    //
    __dumpRegisterSet(registerSet)
    {
        host.diagnostics.debugLog("    Register Set== ");
        for (var setReg of registerSet)
        {
            host.diagnostics.debugLog("'", this.__disassembler.GetRegister(setReg), "'(", setReg, "), ");
        }
        host.diagnostics.debugLog("\n");
    }

    // __addRegisterReferences:
    //
    // Adds a register (and all sub-registers) to a register set.
    //
    __addRegisterReferences(registerSet, reg)
    {
        registerSet.add(reg.Id);
        for(var subReg of reg.GetSubRegisters())
        {
            registerSet.add(subReg.Id);
        }
    }

    // __removeRegisterReferences:
    //
    // Removes a register (and all sub-registers) from a register set.
    //
    __removeRegisterReferences(registerSet, reg)
    {
        registerSet.delete(reg.Id);
        for(var subReg of reg.GetSubRegisters())
        {
            registerSet.delete(subReg.Id);
        }
    }

    // __hasRegisterReference
    //
    // Is the register 'reg' (or any sub-register) in the register set.
    //
    __hasRegisterReference(registerSet, reg)
    {
        if (__diag(3))
        {
            this.__dumpRegisterSet(registerSet);
            host.diagnostics.debugLog("    Comparison Set== '", reg, "'(", reg.Id, "), ");
            for( var subReg of reg.GetSubRegisters())
            {
                host.diagnostics.debugLog("'", subReg, "'(", subReg.Id, "), ");
            }
            host.diagnostics.debugLog("\n");
        }

        if (registerSet.has(reg.Id))
        {
            return true;
        }

        for (var subReg of reg.GetSubRegisters())
        {
            if (registerSet.has(subReg.Id))
            {
                return true;
            }
        }

        return false;
    }

    // __hasWriteOfMemory:
    //
    // Determines whether an operand in the set writes to memory in the memory reference set.
    //
    __hasWriteOfMemory(operandSet, memoryReferences)
    {
        for (var operand of operandSet)
        {
            var attrs = operand.Attributes;
            if (attrs.IsOutput && attrs.IsMemoryReference)
            {
                for (var ref of memoryReferences)
                {
                    if (__diag(5))
                    {
                        host.diagnostics.debugLog("    Checking '" + operand + "' against '" + ref + "'\n");
                    }

                    if (operand.ReferencesSameMemory(ref))
                    {
                        if (__diag(5))
                        {
                            host.diagnostics.debugLog("         Match on memory write!\n");
                        }
                        return true;
                    }
                }
            }
        }

        return false;
    }

    // __writesToRegister
    //
    // Determines whether an operand is a write to a register in a register reference set.
    //
    __writesToRegister(instr, operandSet, registerReferences)
    {
        for (var operand of operandSet)
        {
            var attrs = operand.Attributes;
            if (attrs.IsOutput && attrs.IsRegister)
            {
                for (var reg of registerReferences)
                {
                    if (operand.UsesRegister(reg))
                    {
                        return true;
                    }
                }
            }
        }

        if (instr.Attributes.IsCall)
        {
            var retReg = instr.Attributes.ReturnRegister;

            if (__diag(2))
            {
                host.diagnostics.debugLog("Check for return register '", retReg, "' in instruction '", instr, "'\n");
            }
            
            if (retReg !== undefined)
            {
                if (__diag(2))
                {
                    host.diagnostics.debugLog("    Check id == ", retReg.Id, "\n");
                }

                if (this.__hasRegisterReference(registerReferences, retReg))
                {
                    return true;
                }
            }
        }

        return false;
    }

    // __kill:
    //
    // Removes a set of registers from the register set.
    //
    __kill(registerSet, registerReferences)
    {
        for(var reg of registerSet)
        {
            this.__removeRegisterReferences(registerReferences, reg);
        }
    }

    // __live:
    //
    // Makes a set of registers live in the register set.
    //
    __live(registerSet, registerReferences)
    {
        for (var reg of registerSet)
        {
            this.__addRegisterReferences(registerReferences, reg);
        }
    }

    // __killMemoryReference:
    //
    // Removes a memory reference from the set of live memory references.
    //
    __killMemoryReference(memRef, memoryReferences)
    {
        var i = 0;
        var len = memoryReferences.length;
        while (i < len)
        {
            if (memRef.ReferencesSameMemory(memoryReferences[i]))
            {
                memoryReferences.splice(i, 1);
                break;
            }
            ++i;
        }
    }

    // __liveMemoryReference:
    //
    // Adds a memory reference to the set of live memory references.
    //
    __liveMemoryReference(memRef, memoryReferences)
    {
        var i = 0;
        var len = memoryReferences.length;
        while (i < len)
        {
            if (memRef.ReferencesSameMemory(memoryReferences[i]))
            {
                return;
            }
            ++i;
        }
        memoryReferences.push(memRef);
    }

    // __addCallInputRegisters:
    //
    // Make an attempt to determine what were register inputs to the call and add them to the
    // lifetime set.  This is done by looking at the call target, disassembling it, looking
    // at the first instruction and whether any variables are live in registers as of the 
    // first instruction of the call target.
    //
    __addCallInputRegisters(instr, registerReferences)
    {
        if (__diag(4))
        {
            host.diagnostics.debugLog("Looking at call for inputs: '", instr, "'\n");
        }
   
        var callTarget;
        try
        {
            //
            // We may not be able to read this.  If we cannot, don't bother.
            //
            var opCount = instr.Operands.Count();
            if (opCount == 1)
            {
                var destOperand = instr.Operands.First();
                var attrs = destOperand.Attributes;

                if (attrs.IsImmediate)
                {
                    callTarget = destOperand.ImmediateValue;
                    if (__diag(2))
                    {
                        host.diagnostics.debugLog("Call has direct target: '", callTarget, "'\n");
                    }
                }
                else if (attrs.HasImmediate && attrs.IsMemoryReference && destOperand.Registers.Count() == 0)
                {
                    //
                    // @TODO: This should be sizeof(*) and *NOT* hard code to 64-bit.
                    //
                    var indirectCallTarget = destOperand.ImmediateValue;
                    if (__diag(2))
                    {
                        host.diagnostics.debugLog("Call has indirect target: '", indirectCallTarget, "'\n");
                    }

                    var tableRead = host.memory.readMemoryValues(indirectCallTarget, 1, 8, false);
                    callTarget = tableRead[0];

                    if (__diag(2))
                    {
                        host.diagnostics.debugLog("    Call destination read: '", callTarget, "'\n");
                    }
                }
            }
        }
        catch(exc1)
        {
        }

        try
        {
            //
            // We may not be able to read and disassemble the call target.  If we cannot, don't bother.
            //
            if (callTarget !== undefined)
            {
                //
                // We found the call target.  Disassemble it, get the first instruction, and go through all
                // live variables which are enregistered at this point.
                //
                var targetDis = this.__disassembler.DisassembleInstructions(callTarget);
                var firstInstr = targetDis.First();
                if (__diag(1))
                {
                    host.diagnostics.debugLog("Looking at call destination instruction '", firstInstr, "' for live variables.\n");
                }
                for (var liveVar of firstInstr.LiveVariables)
                {
                    if (liveVar.LocationKind == "Register" && liveVar.Offset == 0)
                    {
                        if (__diag(1))
                        {
                            host.diagnostics.debugLog("    Found call input register '", liveVar.Register, "'\n");
                        }
                        this.__addRegisterReferences(registerReferences, liveVar.Register);
                    }
                }
            }
        }
        catch(exc2)
        {
        }
    }

    // __reformLifetimes
    //
    // Performs any kills of written registers or memory references and 
    // adds all source registers and memory references to the set
    //
    // @TODO: If we pass the operandSet instead of instr, the second for...of will crash.  Fix!
    //
    __reformLifetimes(instr, registerReferences, memoryReferences)
    {
        if (instr.Attributes.IsCall)
        {
            var setCopy = new Set(registerReferences);
            for (var regId of setCopy)
            {
                var preserves = instr.PreservesRegisterValue(regId);
                if (__diag(3))
                {
                    host.diagnostics.debugLog("    Check preservation of (", regId, ") == ", preserves, "\n");
                }
                if (!preserves)
                {
                    this.__removeRegisterReferences(registerReferences, this.__disassembler.GetRegister(regId));
                }
            }
        }
        else
        {
            for (var operand of instr.Operands /*operandSet*/)
            {
                var attrs = operand.Attributes;
                if (attrs.IsOutput)
                {
                    if (attrs.IsRegister)
                    {
                        //
                        // Kill the registers.
                        //
                        this.__kill(operand.Registers, registerReferences);
                    }
                    else if (attrs.IsMemoryReference)
                    {
                        //
                        // Is there a memory reference in the array.
                        //
                        this.__killMemoryReference(operand, memoryReferences);
                    }
                }
            }
        }

        for (var operand of instr.Operands /*operandSet*/)
        {
            var attrs = operand.Attributes;
            if (attrs.IsInput)
            {
                this.__live(operand.Registers, registerReferences);
                if (attrs.IsMemoryReference)
                {
                    this.__liveMemoryReference(operand, memoryReferences);
                }
            }
        }

        //
        // If we have a call and can determine register passed values, do so.
        //
        if (instr.Attributes.IsCall)
        {
            this.__addCallInputRegisters(instr, registerReferences);
        }
    }

    // __dbgOutputSets:
    //
    // Diagnostic helper to output the live register and memory sets.
    //
    __dbgOutputSets(msg, registerReferences, memoryReferences)
    {
        if (__diag(2))
        {
            host.diagnostics.debugLog(msg, "\n");
            for (var regRef of registerReferences)
            {
                host.diagnostics.debugLog("    ", regRef, "\n");
            }
            for (var memRef of memoryReferences)
            {
                host.diagnostics.debugLog("    ", memRef, "\n");
            }
        }
    }

    // __scanBlockBackwards:
    //
    // For the given basic block, an instruction within that block
    // scan the block backwards looking for instructions that write to the source operands. 
    //
    // If one of the sources is written to, kill it from the scan.
    //
    *__scanBlockBackwards(basicBlock, instruction, registerReferences, memoryReferences, skipInstruction)
    {
        if (this.__exploredBlocks.has(basicBlock.StartAddress))
        {
            return;
        }
        this.__exploredBlocks.add(basicBlock.StartAddress);

        this.__dbgOutputSets("Scan: ", registerReferences, memoryReferences);

        //
        // Get the set of instructions in the basic block and walk them backwards.
        //
        var blockBackwards = basicBlock.Instructions.Reverse();
        var hitInstr = false;
        var address = instruction.Address;
        for (var instr of blockBackwards)
        {
            //
            // We have to get to the instruction in reverse first.
            //
            if (!hitInstr)
            {
                if (instr.Address.compareTo(address) == 0)
                {
                    hitInstr = true;
                }

                if (!hitInstr || skipInstruction)
                {
                    continue;
                }
            }

            //
            // This is in the basic block *BEFORE* the starting instruction.
            //
            if (__diag(2))
            {
                host.diagnostics.debugLog("Looking at instruction '", instr, "'\n");
            }

            //
            // If we have an instruction that writes to the same memory, it matches.
            //
            // If we have an instruction that writes to a referenced register, it matches -- add the source registers,
            //     and kill the destination registers.
            //
            var hasSameMemRef = this.__hasWriteOfMemory(instr.Operands, memoryReferences);
            var hasRegRef = this.__writesToRegister(instr, instr.Operands, registerReferences);

            if (__diag(5))
            {
                host.diagnostics.debugLog("    Has write: '", hasSameMemRef, "'\n");
                host.diagnostics.debugLog("    Has reg  : '", hasRegRef, "'\n");
            }

            if (hasSameMemRef || hasRegRef)
            {
                yield new host.indexedValue(instr, [instr.Address]);

                //
                // Once we have yielded that instruction, change the live register set.  Kill anything written
                // in instr and add anything read.
                //
                this.__reformLifetimes(instr, registerReferences, memoryReferences);
                this.__dbgOutputSets("Reform: ", registerReferences, memoryReferences);
            }
        }

        if (__diag(1))
        {
            host.diagnostics.debugLog("Traverse to blocks:\n");
            for (var inboundFlow of basicBlock.InboundControlFlows)
            {
                host.diagnostics.debugLog("    ", inboundFlow.LinkedBlock, "\n");
            }
        }

        //
        // The basic block has entries from other blocks, scan them.
        //
        for (var inboundFlow of basicBlock.InboundControlFlows)
        {
            var childSet = new Set(registerReferences);
            var childMem = memoryReferences.slice();
            yield* this.__scanBlockBackwards(inboundFlow.LinkedBlock, inboundFlow.SourceInstruction, childSet, childMem, false);
        }
    }

    // [Symbol.iterator]:
    //
    // Find all instructions in the data flow.
    //
    *[Symbol.iterator]()
    {
        this.__exploredBlocks = new Set();

        //
        // Find the starting instruction.  It is obviously part of the data flow.
        //
        var startingBlock = this.__findBasicBlock(this.__address);
        var startingInstruction = startingBlock.Instructions.getValueAt(this.__address);
        yield new host.indexedValue(startingInstruction, [startingInstruction.Address]);

        var memoryReferences = [];
        var registerReferences = new Set();

        if (__diag(2))
        {
            host.diagnostics.debugLog("Starting Instruction: ", startingInstruction, "\n");
        }
        for (var operand of startingInstruction.Operands)
        {
            if (__diag(5))
            {
                host.diagnostics.debugLog("Is '", operand, "' a source?\n");
            }
            var attrs = operand.Attributes;
            if (attrs.IsInput)
            {
                if (__diag(5))
                {
                    host.diagnostics.debugLog("    Yes\n");
                }
                if (attrs.IsMemoryReference)
                {
                    if (__diag(5))
                    {
                        host.diagnostics.debugLog("MemRef: ", operand, "\n");
                    }
                    memoryReferences.push(operand);
                }

                for (var reg of operand.Registers)
                {
                    if (__diag(5))
                    {
                        host.diagnostics.debugLog("RegRef: ", reg, "\n");
                    }
                    this.__addRegisterReferences(registerReferences, reg);
                }
            }
        }

        yield* this.__scanBlockBackwards(startingBlock, startingInstruction, registerReferences, memoryReferences, true);
    }

    // getDimensionality:
    //
    // Return the dimensionality of our indexer (1 -- by instruction address)
    //
    getDimensionality()
    {
        return 1;
    }

    // getValueAt:
    //
    // Return the instruction at the given address.  @TODO: It would be nice if this only allowed indexing
    // instructions in the data flow. 
    //
    getValueAt(addr)
    {
        var basicBlock = this.__findBasicBlock(this.__address);
        return basicBlock.Instructions.getValueAt(addr);
    }
}

// __getDisassemblyInfo:
//
// Gets information about where to disassemble for the data flow.  From the given address, this attempts
// to go back and find the start of the function to walk its dataflow.
//
function __getDisassemblyInfo(instrAddr)
{
    // 
    // If there is no specified address, grab IP.
    // @TODO: This should *NOT* directly reference RIP.  The stack frame should have an abstract IP/SP/FP
    //
    if (instrAddr === undefined)
    {
        if (__diag(5))
        {
            host.diagnostics.debugLog("Override to IP, instrAddr\n");
        }
        instrAddr = host.currentThread.Registers.User.rip;
    }

    //
    // If we can get the disassembly info from the new host.getModuleContainingSymbol, do so
    //
    var func;
    try
    {
        func = host.getModuleContainingSymbol(instrAddr);
    }
    catch(exc)
    {
    }

    if (func === undefined)
    {
        //
        // There should be a better way of doing this.  We should also use address instead!
        //
        var frame = host.currentThread.Stack.Frames[0];
        var frameStr = frame.toString();

        //
        // MODULE!NAME + OFFSET
        //
        var idx = frameStr.indexOf('+');
        if (idx != -1)
        {
            frameStr = frameStr.substr(0, idx).trim();
        }

        //
        // MODULE!NAME
        //
        var bangIdx = frameStr.indexOf('!');
        if (idx == -1)
        {
            throw new Error("Unable to find function name to disassemble");
        }

        var moduleName = frameStr.substr(0, bangIdx);
        var funcName = frameStr.substr(bangIdx + 1);

        if (__diag(2))
        {
            host.diagnostics.debugLog("ModuleName = '", moduleName, "'; funcName = '", funcName, "'\n");
        }

        func = host.getModuleSymbol(moduleName, funcName);
    }

    return { function: func, address: instrAddr };
}

// __CodeExtension:
//
// Provides an extension on Debugger.Utility.Code
//
class __CodeExtension
{
    TraceDataFlow(address)
    {
        var disassemblyInfo = __getDisassemblyInfo(address);
        var disassembler = host.namespace.Debugger.Utility.Code.CreateDisassembler();
        var funcDisassembly = disassembler.DisassembleFunction(disassemblyInfo.function, true);
        return new __TraceDataFlow(disassembler, funcDisassembly, disassemblyInfo.address);
    }
}

// __traceDataFlow:
//
// Function alias for !dflow
//
function __traceDataFlow(address)
{
    return host.namespace.Debugger.Utility.Code.TraceDataFlow(address);
}

// __disassembleCode:
//
// Function alias for !dis
//
function __disassembleCode(addressObj)
{
    var dbg = host.namespace.Debugger;

    if (addressObj === undefined)
    {
        //
        // @TODO:
        // This is *NOT* generic.  This is *DBGENG* specific.  We should get an IP from the stack.
        //
        addressObj = dbg.State.PseudoRegisters.RegisterAliases.ip.address;
    }

    return dbg.Utility.Code.CreateDisassembler().DisassembleInstructions(addressObj);
}

// __InstructionExtension:
//
// Provides an extension on an instruction
//
class __InstructionExtension
{
    get SourceDataFlow()
    {
        return __traceDataFlow(this.Address);
    }
}

// initializeScript:
//
// Initializes our script.  Registers our extensions and !dflow alias.
//
function initializeScript()
{
    return [new host.apiVersionSupport(1, 2),
            new host.namespacePropertyParent(__CodeExtension, "Debugger.Models.Utility", "Debugger.Models.Utility.Code", "Code"),
            new host.namedModelParent(__InstructionExtension, "Debugger.Models.Utility.Code.Instruction"),
            new host.functionAlias(__traceDataFlow, "dflow"),
            new host.functionAlias(__disassembleCode, "dis")];
}

// SIG // Begin signature block
// SIG // MIIROAYJKoZIhvcNAQcCoIIRKTCCESUCAQExDzANBglg
// SIG // hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
// SIG // BgEEAYI3AgEeMCQCAQEEEBDgyQbOONQRoqMAEEvTUJAC
// SIG // AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
// SIG // 8Vd5mJ3w6q+ClnHrnQIoaqCXDHQ0K4ZNgLaaX8x0Gjag
// SIG // gg3IMIIGKDCCBBCgAwIBAgITMwAABrG6aGhh3T/S4QAA
// SIG // AAAGsTANBgkqhkiG9w0BAQsFADB9MQswCQYDVQQGEwJV
// SIG // UzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMH
// SIG // UmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
// SIG // cmF0aW9uMScwJQYDVQQDEx5NaWNyb3NvZnQgRGV2ZWxv
// SIG // cG1lbnQgUENBIDIwMTQwHhcNMjMwNzEzMjIzNzIwWhcN
// SIG // MjQwOTE1MjIzNzIwWjB/MQswCQYDVQQGEwJVUzETMBEG
// SIG // A1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9u
// SIG // ZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9u
// SIG // MSkwJwYDVQQDEyBNaWNyb3NvZnQgV2luZG93cyBLaXRz
// SIG // IFB1Ymxpc2hlcjCCASIwDQYJKoZIhvcNAQEBBQADggEP
// SIG // ADCCAQoCggEBAJBcN+eOn5wG7eAY4tnptAO9YcTSIP2/
// SIG // QUoogo7Y/w/HgBlVZi+NW5ZvaQj0hUZihGEnUWD4fvhp
// SIG // 2PpBLre4LdwMjJ7gnNCwa3jtO7+bZi6bchSajzZVZxXL
// SIG // s6lg2G4NYrk/Dm9eHABSreM1d4rt7Rcy3UIzqXTHga/2
// SIG // o90tWR179JgpBxMju/F/lCxJJA979SZyrMT3uS9ubWIh
// SIG // sFLKBfurt4bb+AhHepTNx+ICT2O+m6z8jktICc5Z0Z5f
// SIG // x57595plSzca67m56fKLjpbVC14kxeE7xwL9vOZlq4xG
// SIG // FhWAHwtgCrkRTpMnIGmCL3k/5tkWE0UQds1nc+nPqyNh
// SIG // fWsCAwEAAaOCAZ0wggGZMDcGA1UdJQQwMC4GCisGAQQB
// SIG // gjcKAw0GCisGAQQBgjcKAxQGCisGAQQBgjcKAxsGCCsG
// SIG // AQUFBwMDMB0GA1UdDgQWBBQEkEMReeaiQdy12lrprkX9
// SIG // Sl2XPTBFBgNVHREEPjA8pDowODEeMBwGA1UECxMVTWlj
// SIG // cm9zb2Z0IENvcnBvcmF0aW9uMRYwFAYDVQQFEw0yMzEx
// SIG // MzkrNTAxMTIzMB8GA1UdIwQYMBaAFITdEDZ7C9IIoyZW
// SIG // nyKVJUGFLAnAMF0GA1UdHwRWMFQwUqBQoE6GTGh0dHA6
// SIG // Ly93d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMvY3JsL01p
// SIG // Y3Jvc29mdCUyMERldmVsb3BtZW50JTIwUENBJTIwMjAx
// SIG // NC5jcmwwagYIKwYBBQUHAQEEXjBcMFoGCCsGAQUFBzAC
// SIG // hk5odHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpb3Bz
// SIG // L2NlcnRzL01pY3Jvc29mdCUyMERldmVsb3BtZW50JTIw
// SIG // UENBJTIwMjAxNC5jcnQwDAYDVR0TAQH/BAIwADANBgkq
// SIG // hkiG9w0BAQsFAAOCAgEAafxX5KMH8TcjV52+BhSRZZG+
// SIG // Zk//aPIteDb5mhHpUVED8TvD5BMXgtADdWTMTYLEF7qC
// SIG // R12hbV2BmXGsXTjJC1puZ52UTkQ8OLOiSVdyMymsbcje
// SIG // MvjEFMQk8gfh/ha485cXM4kd7l3bgLKmqVvI8NEps0dx
// SIG // 2K2I5n93mfCB68ilIXd8xE2LaNDwKd/mLGD7x0BJpZwh
// SIG // iOBwjIK+CpruqGCMHqp5C2gXlMhjSozXDbnhVvD1sHBq
// SIG // wWmjJRiqcbc2xDduzo+/lBfj3pJeSrPcVQBQlUyaR0kX
// SIG // zOuGAorX1MNylINGtZKEQT2P0q+oBbkMNqI8iz5Vyjvn
// SIG // 3fhkvtYTzFOTZZ3TtBqSS7y7Fk9YADVplo4GZGwHBVs8
// SIG // GQn2t1gNiiMx4M17Bwt+ZBK688tnE/yFLQJk9IXEKI01
// SIG // Z5+l+DG+JnvAszvfC5sTq817AZ9rzJpNBFnxPdtIywNl
// SIG // IwBMAshPGzyKkVpvRhZIl3gb5x959DlH3+oEO6pVvBts
// SIG // V7ZgQ40XBhTe7EAb2Hb/7TAU4cJsgJJHJdYO4cG7EU/Q
// SIG // VhuTYvJN5FKSWd7b2wmJDAFaBZ0tHO1XM/81fM/bJsMp
// SIG // A1jqyFigN6zZS2XABqd5zb/CDoUm5ewGw5d0WhjMMaAV
// SIG // 64JJYh/WTJfQohaeJn7pIWvBACZ58GYYAR+2xPQ0hn4w
// SIG // ggeYMIIFgKADAgECAhMzAAAAA8b5tMOuvllLAAAAAAAD
// SIG // MA0GCSqGSIb3DQEBCwUAMIGUMQswCQYDVQQGEwJVUzET
// SIG // MBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVk
// SIG // bW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0
// SIG // aW9uMT4wPAYDVQQDEzVNaWNyb3NvZnQgRGV2ZWxvcG1l
// SIG // bnQgUm9vdCBDZXJ0aWZpY2F0ZSBBdXRob3JpdHkgMjAx
// SIG // NDAeFw0xNDA1MjgxNzMzMzNaFw0yOTA1MjgxNzQzMzNa
// SIG // MH0xCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5n
// SIG // dG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVN
// SIG // aWNyb3NvZnQgQ29ycG9yYXRpb24xJzAlBgNVBAMTHk1p
// SIG // Y3Jvc29mdCBEZXZlbG9wbWVudCBQQ0EgMjAxNDCCAiIw
// SIG // DQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIBAMtTDEH5
// SIG // TUQkyNplTmZsxYKVcHIz87cuhq4WQbzc1Lhp+xLAlL6v
// SIG // lMJ/dpw801TUtYjtj7EMG1FKj+qQ46xO99/SEnuOf3LQ
// SIG // NTys6OlnzOkyMjHoQ1/fFJpAjxgLmQcTO3GSmx0Z+ZuV
// SIG // 9081YThWMrLtZIQY+lqFsZK/AbjGlpMEOqjq7ILqzR6C
// SIG // wuYA5Jk9iaXdcSCeiN1eTa1tzwnzqKYTbwwD4QwumLTC
// SIG // owecGm9f03YvvpnulcawlF+xuKZLky8C8cwjwkOWOKW/
// SIG // m3wtbBw1R7iAPOf6nwyc799ejM90Cwwzl3/qBNXFM9MP
// SIG // nrCQJdq6/WieybQBbqnvYzMw6QjI65PPW5m/ocpUOsCK
// SIG // HZNsitC8L8ci/kDjRHaa0pTfF2VLeyaAztlHM031ZuT8
// SIG // xs1yrH7xcJKDPnIhkMDsjf9ZsVuzMlCUxcFse2pWyPkQ
// SIG // fEsanmEsoiHuX5ykZOwy0rR7mohCqSxWLheW/pMrRAxe
// SIG // nyPOAvY7iZjAQfxB1/oofUQB8pGy0bpintgFYwZWpsIY
// SIG // AWb9vUQrTVnC8JssEHQ0byChKj1YzlzwUeEloem/szVx
// SIG // yQ1lxWx1AbfD/LOWk8LYr01ZKv3Mz6bzw7WWknqrtEqu
// SIG // OKICPeaRkN2j7KklyQjBUbGpIFyMajqR5wkSf87KeM8o
// SIG // Q6p0C1yeEXD/xFk1AgMBAAGjggH3MIIB8zAQBgkrBgEE
// SIG // AYI3FQEEAwIBADAdBgNVHQ4EFgQUhN0QNnsL0gijJlaf
// SIG // IpUlQYUsCcAwZAYDVR0gBF0wWzAGBgRVHSAAMFEGDCsG
// SIG // AQQBgjdMg30BATBBMD8GCCsGAQUFBwIBFjNodHRwOi8v
// SIG // d3d3Lm1pY3Jvc29mdC5jb20vcGtpb3BzL0RvY3MvUmVw
// SIG // b3NpdG9yeS5odG0wGQYJKwYBBAGCNxQCBAweCgBTAHUA
// SIG // YgBDAEEwCwYDVR0PBAQDAgGGMA8GA1UdEwEB/wQFMAMB
// SIG // Af8wHwYDVR0jBBgwFoAUhXAAn3dZHoysPJ93JigZzJrB
// SIG // jzIweAYDVR0fBHEwbzBtoGugaYZnaHR0cDovL3d3dy5t
// SIG // aWNyb3NvZnQuY29tL3BraW9wcy9jcmwvTWljcm9zb2Z0
// SIG // JTIwRGV2ZWxvcG1lbnQlMjBSb290JTIwQ2VydGlmaWNh
// SIG // dGUlMjBBdXRob3JpdHklMjAyMDE0LmNybDCBhQYIKwYB
// SIG // BQUHAQEEeTB3MHUGCCsGAQUFBzAChmlodHRwOi8vd3d3
// SIG // Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2NlcnRzL01pY3Jv
// SIG // c29mdCUyMERldmVsb3BtZW50JTIwUm9vdCUyMENlcnRp
// SIG // ZmljYXRlJTIwQXV0aG9yaXR5JTIwMjAxNC5jcnQwDQYJ
// SIG // KoZIhvcNAQELBQADggIBAE7qHQz+04LRdV/wMN93jayD
// SIG // VrA0zb6nB/N0rO48Sl0f2r0q9mj7KjdDlwl5LAG9odSa
// SIG // dTiUl2LI63O8iZRDyyi0S1W58VbVJOLLp/BGQNb+MP4p
// SIG // MlPtOSEDczCVLWqxhwPfUXzxRhP59QVE3Q+SYzpxzM+g
// SIG // VfFtLZUh4HZUZJXZZo9/ayXFioYZcTTFUyL23FWb2rrm
// SIG // pfL39ix2RtJh3kja43AeVeAxjFv0s8Id+v9+sY213v6U
// SIG // /QFKy/ofTA20WnIigrYrI1MKnS7fVT38GLMyW06xrwC/
// SIG // mviRVi5xTkRSxzV503VKuESlpflnRM8nMNx4T34J1aFR
// SIG // wGs/iuNZC3HvypI1ndEqt4x1IEOSdC4S3056e1mmDGWH
// SIG // yptpU3UirNn22Q85vsaTSeFt2GNy5YZcKcfV26X5XpM5
// SIG // sMWEyXHiFVSmzIqpHkYkTeQ8n8EF34w0M24FwaFA2agL
// SIG // lUlzDANPzMN8UiPepDbFzYI9y/jwEnzYHC1dt7oFfsAO
// SIG // GZ9Se1M/Bpq9lCdiT1UDluKJr/PMZ5UwLRq0ALtVx2+L
// SIG // kH1NTyxCUIRjPit2wwT3VuDgMXZQ5QIMAKoOT/SkKR8S
// SIG // lmKoZNzxww4m12Ljxq2kaABnMEEBFx/fYWSLgx03uoLx
// SIG // aJ20aZ+tgtzbE1LWTFULDM3z1blZxvdxi33/cV492d4A
// SIG // MYICyDCCAsQCAQEwgZQwfTELMAkGA1UEBhMCVVMxEzAR
// SIG // BgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1v
// SIG // bmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlv
// SIG // bjEnMCUGA1UEAxMeTWljcm9zb2Z0IERldmVsb3BtZW50
// SIG // IFBDQSAyMDE0AhMzAAAGsbpoaGHdP9LhAAAAAAaxMA0G
// SIG // CWCGSAFlAwQCAQUAoIIBBDAZBgkqhkiG9w0BCQMxDAYK
// SIG // KwYBBAGCNwIBBDAcBgorBgEEAYI3AgELMQ4wDAYKKwYB
// SIG // BAGCNwIBFTAvBgkqhkiG9w0BCQQxIgQgohfhR3HhTgB0
// SIG // yf0ye4cb5ufm23Z7jaz/DkRz8NyYF4wwPAYKKwYBBAGC
// SIG // NwoDHDEuDCxzUFk3eFBCN2hUNWc1SEhyWXQ4ckRMU005
// SIG // VnVaUnVXWmFlZjJlMjJSczU0PTBaBgorBgEEAYI3AgEM
// SIG // MUwwSqAkgCIATQBpAGMAcgBvAHMAbwBmAHQAIABXAGkA
// SIG // bgBkAG8AdwBzoSKAIGh0dHA6Ly93d3cubWljcm9zb2Z0
// SIG // LmNvbS93aW5kb3dzMA0GCSqGSIb3DQEBAQUABIIBAIF0
// SIG // 345SKDCbUW2vDiVyOYUN/L7WHdRHa/ex/w5/1XgGB2iC
// SIG // NTxmaYjCLc99rHIBOHVRVid3wVDWAEgBCBGv7//riF3p
// SIG // HMgaw9xy6cnn+ZQA/QveGr+oR++ZTsWXEeMMdcoihXFv
// SIG // 3iUFelr+3muR1z1ljq29Ahd+Fiks/jpg981KvDxb+0tz
// SIG // 0kfrhE50HxQXSsHaTLi4qUrpD13UdlK0gzNxaNNBLjQZ
// SIG // ZlLtloBuBnlzPDeyHCbR7cuzbPDqzjKJN654ZNgPfxNu
// SIG // qiaJpUFSjIXyFMkz7WqJsQ0m/lInq2S8lEtfz4qweeCh
// SIG // WSHQ3NAWTw0QNk3/Wwwdxqu2p0dRQZo=
// SIG // End signature block
