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
// SIG // MIIRLQYJKoZIhvcNAQcCoIIRHjCCERoCAQExDzANBglg
// SIG // hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
// SIG // BgEEAYI3AgEeMCQCAQEEEBDgyQbOONQRoqMAEEvTUJAC
// SIG // AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
// SIG // 8Vd5mJ3w6q+ClnHrnQIoaqCXDHQ0K4ZNgLaaX8x0Gjag
// SIG // gg29MIIGHTCCBAWgAwIBAgITMwAABqK9Z7xIY6KunQAA
// SIG // AAAGojANBgkqhkiG9w0BAQsFADB9MQswCQYDVQQGEwJV
// SIG // UzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMH
// SIG // UmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
// SIG // cmF0aW9uMScwJQYDVQQDEx5NaWNyb3NvZnQgRGV2ZWxv
// SIG // cG1lbnQgUENBIDIwMTQwHhcNMjMwNzEzMjIzNjQwWhcN
// SIG // MjQwOTE1MjIzNjQwWjB0MQswCQYDVQQGEwJVUzETMBEG
// SIG // A1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9u
// SIG // ZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9u
// SIG // MR4wHAYDVQQDExVNaWNyb3NvZnQgQ29ycG9yYXRpb24w
// SIG // ggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCv
// SIG // 6wy1fRmNIH+mLta8TD4+LdbxLUGEbWmTpjXFPtMsdlVs
// SIG // 19gXzLZs3GU0k4mUDvJD7YYr+5f7NyBjVJQW4BZ4HnuQ
// SIG // Fzo+hKWZATGoPbxotsANxjANFVWJG/3zljR0IxCCfUYn
// SIG // XJqVxeanl0XNVb4h2XQystC0iZxNuKTp1zi1HlINvGC9
// SIG // 7wgEXiyS5RkEKuBFgcZjyv138YBc4LdByO8jEaysUC6P
// SIG // WfgxO1+Q1QwcWZceLQ6NrbGF0/nHrlVgi2DuQqWmla/f
// SIG // vx8i9QVesOyInSCa4rV8B3CCEtcL9dNZPuDBWTDU7WQu
// SIG // QZc4KeQLhESdPMaH0rHMNuKRLjHuLxRxAgMBAAGjggGd
// SIG // MIIBmTA3BgNVHSUEMDAuBgorBgEEAYI3CgMNBgorBgEE
// SIG // AYI3CgMbBgorBgEEAYI3PQYBBggrBgEFBQcDAzAdBgNV
// SIG // HQ4EFgQUPi8urKM8JdW3F8JP7L5LdMBAYB4wRQYDVR0R
// SIG // BD4wPKQ6MDgxHjAcBgNVBAsTFU1pY3Jvc29mdCBDb3Jw
// SIG // b3JhdGlvbjEWMBQGA1UEBRMNMjMxMTA1KzUwMTEyMDAf
// SIG // BgNVHSMEGDAWgBSE3RA2ewvSCKMmVp8ilSVBhSwJwDBd
// SIG // BgNVHR8EVjBUMFKgUKBOhkxodHRwOi8vd3d3Lm1pY3Jv
// SIG // c29mdC5jb20vcGtpb3BzL2NybC9NaWNyb3NvZnQlMjBE
// SIG // ZXZlbG9wbWVudCUyMFBDQSUyMDIwMTQuY3JsMGoGCCsG
// SIG // AQUFBwEBBF4wXDBaBggrBgEFBQcwAoZOaHR0cDovL3d3
// SIG // dy5taWNyb3NvZnQuY29tL3BraW9wcy9jZXJ0cy9NaWNy
// SIG // b3NvZnQlMjBEZXZlbG9wbWVudCUyMFBDQSUyMDIwMTQu
// SIG // Y3J0MAwGA1UdEwEB/wQCMAAwDQYJKoZIhvcNAQELBQAD
// SIG // ggIBAHGKAVDv5Jpdaav0FNV2O5TL2ze/7osH+3Cp67xy
// SIG // S/TfFfPk3PFo7RrXRS9rNpoas0YZLwoRgRJROCNiVLjy
// SIG // pzck37TOwbuhrg3Mmuz9Z0B9IxUkf7l7uKYioBxNHtqw
// SIG // tthV/3egoHF2z+usNliZkmp5e71OiBzFjKEVL2pnuV8s
// SIG // UuU3jAaMiiT5082ykrTHpJoJQcX6GVbgkFTeMc9tK8F/
// SIG // iNaQxfV0/lysfah+hYO3GUnsRdXcR/ZpF2NxPuAGQuwd
// SIG // NZs+L1NFdok4xCboDH8r0OuW9Gz3ydh+9m5kA0yC/HgH
// SIG // fdxlX6oUm4QkSGlWoZHZO6mO2vVg9bfNPELsDKruFpYS
// SIG // z+1EAmTaCw/XCBA4X0DgO2s0el47xRoMZoHKAe8oraiO
// SIG // 48sryvIJnP7mylyQCLc5isPiXJgOWLoxOgFFxx3C+oPj
// SIG // +qFan3vZWb13pz1xJUvMh3aEyPlR+Q2uQjUCgry5mMkq
// SIG // TNQVQS+Jf00JDHo5dtXBQf7NEX4OevW3a7BBBQLfZvAH
// SIG // cqFDuI0prxR6jOhsO+UT7RkjFGMQUCTW+I/dsB3HxS9X
// SIG // w/W/J1Otfjpqf556/WEwiiEl1o8+zNmw1MlSu+IzNRLH
// SIG // Svzd02NGVLMzRCLUzeuGB0JbzD74RpOD75F88r60f01r
// SIG // K7BvNVPNieF+FiWno4HAc4ZzzQWNMIIHmDCCBYCgAwIB
// SIG // AgITMwAAAAPG+bTDrr5ZSwAAAAAAAzANBgkqhkiG9w0B
// SIG // AQsFADCBlDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldh
// SIG // c2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNV
// SIG // BAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjE+MDwGA1UE
// SIG // AxM1TWljcm9zb2Z0IERldmVsb3BtZW50IFJvb3QgQ2Vy
// SIG // dGlmaWNhdGUgQXV0aG9yaXR5IDIwMTQwHhcNMTQwNTI4
// SIG // MTczMzMzWhcNMjkwNTI4MTc0MzMzWjB9MQswCQYDVQQG
// SIG // EwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UE
// SIG // BxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENv
// SIG // cnBvcmF0aW9uMScwJQYDVQQDEx5NaWNyb3NvZnQgRGV2
// SIG // ZWxvcG1lbnQgUENBIDIwMTQwggIiMA0GCSqGSIb3DQEB
// SIG // AQUAA4ICDwAwggIKAoICAQDLUwxB+U1EJMjaZU5mbMWC
// SIG // lXByM/O3LoauFkG83NS4afsSwJS+r5TCf3acPNNU1LWI
// SIG // 7Y+xDBtRSo/qkOOsTvff0hJ7jn9y0DU8rOjpZ8zpMjIx
// SIG // 6ENf3xSaQI8YC5kHEztxkpsdGfmblfdPNWE4VjKy7WSE
// SIG // GPpahbGSvwG4xpaTBDqo6uyC6s0egsLmAOSZPYml3XEg
// SIG // nojdXk2tbc8J86imE28MA+EMLpi0wqMHnBpvX9N2L76Z
// SIG // 7pXGsJRfsbimS5MvAvHMI8JDljilv5t8LWwcNUe4gDzn
// SIG // +p8MnO/fXozPdAsMM5d/6gTVxTPTD56wkCXauv1onsm0
// SIG // AW6p72MzMOkIyOuTz1uZv6HKVDrAih2TbIrQvC/HIv5A
// SIG // 40R2mtKU3xdlS3smgM7ZRzNN9Wbk/MbNcqx+8XCSgz5y
// SIG // IZDA7I3/WbFbszJQlMXBbHtqVsj5EHxLGp5hLKIh7l+c
// SIG // pGTsMtK0e5qIQqksVi4Xlv6TK0QMXp8jzgL2O4mYwEH8
// SIG // Qdf6KH1EAfKRstG6Yp7YBWMGVqbCGAFm/b1EK01ZwvCb
// SIG // LBB0NG8goSo9WM5c8FHhJaHpv7M1cckNZcVsdQG3w/yz
// SIG // lpPC2K9NWSr9zM+m88O1lpJ6q7RKrjiiAj3mkZDdo+yp
// SIG // JckIwVGxqSBcjGo6kecJEn/OynjPKEOqdAtcnhFw/8RZ
// SIG // NQIDAQABo4IB9zCCAfMwEAYJKwYBBAGCNxUBBAMCAQAw
// SIG // HQYDVR0OBBYEFITdEDZ7C9IIoyZWnyKVJUGFLAnAMGQG
// SIG // A1UdIARdMFswBgYEVR0gADBRBgwrBgEEAYI3TIN9AQEw
// SIG // QTA/BggrBgEFBQcCARYzaHR0cDovL3d3dy5taWNyb3Nv
// SIG // ZnQuY29tL3BraW9wcy9Eb2NzL1JlcG9zaXRvcnkuaHRt
// SIG // MBkGCSsGAQQBgjcUAgQMHgoAUwB1AGIAQwBBMAsGA1Ud
// SIG // DwQEAwIBhjAPBgNVHRMBAf8EBTADAQH/MB8GA1UdIwQY
// SIG // MBaAFIVwAJ93WR6MrDyfdyYoGcyawY8yMHgGA1UdHwRx
// SIG // MG8wbaBroGmGZ2h0dHA6Ly93d3cubWljcm9zb2Z0LmNv
// SIG // bS9wa2lvcHMvY3JsL01pY3Jvc29mdCUyMERldmVsb3Bt
// SIG // ZW50JTIwUm9vdCUyMENlcnRpZmljYXRlJTIwQXV0aG9y
// SIG // aXR5JTIwMjAxNC5jcmwwgYUGCCsGAQUFBwEBBHkwdzB1
// SIG // BggrBgEFBQcwAoZpaHR0cDovL3d3dy5taWNyb3NvZnQu
// SIG // Y29tL3BraW9wcy9jZXJ0cy9NaWNyb3NvZnQlMjBEZXZl
// SIG // bG9wbWVudCUyMFJvb3QlMjBDZXJ0aWZpY2F0ZSUyMEF1
// SIG // dGhvcml0eSUyMDIwMTQuY3J0MA0GCSqGSIb3DQEBCwUA
// SIG // A4ICAQBO6h0M/tOC0XVf8DDfd42sg1awNM2+pwfzdKzu
// SIG // PEpdH9q9KvZo+yo3Q5cJeSwBvaHUmnU4lJdiyOtzvImU
// SIG // Q8sotEtVufFW1STiy6fwRkDW/jD+KTJT7TkhA3MwlS1q
// SIG // sYcD31F88UYT+fUFRN0PkmM6cczPoFXxbS2VIeB2VGSV
// SIG // 2WaPf2slxYqGGXE0xVMi9txVm9q65qXy9/YsdkbSYd5I
// SIG // 2uNwHlXgMYxb9LPCHfr/frGNtd7+lP0BSsv6H0wNtFpy
// SIG // IoK2KyNTCp0u31U9/BizMltOsa8Av5r4kVYucU5EUsc1
// SIG // edN1SrhEpaX5Z0TPJzDceE9+CdWhUcBrP4rjWQtx78qS
// SIG // NZ3RKreMdSBDknQuEt9OentZpgxlh8qbaVN1IqzZ9tkP
// SIG // Ob7Gk0nhbdhjcuWGXCnH1dul+V6TObDFhMlx4hVUpsyK
// SIG // qR5GJE3kPJ/BBd+MNDNuBcGhQNmoC5VJcwwDT8zDfFIj
// SIG // 3qQ2xc2CPcv48BJ82BwtXbe6BX7ADhmfUntTPwaavZQn
// SIG // Yk9VA5biia/zzGeVMC0atAC7Vcdvi5B9TU8sQlCEYz4r
// SIG // dsME91bg4DF2UOUCDACqDk/0pCkfEpZiqGTc8cMOJtdi
// SIG // 48atpGgAZzBBARcf32Fki4MdN7qC8WidtGmfrYLc2xNS
// SIG // 1kxVCwzN89W5Wcb3cYt9/3FePdneADGCAsgwggLEAgEB
// SIG // MIGUMH0xCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNo
// SIG // aW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQK
// SIG // ExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xJzAlBgNVBAMT
// SIG // Hk1pY3Jvc29mdCBEZXZlbG9wbWVudCBQQ0EgMjAxNAIT
// SIG // MwAABqK9Z7xIY6KunQAAAAAGojANBglghkgBZQMEAgEF
// SIG // AKCCAQQwGQYJKoZIhvcNAQkDMQwGCisGAQQBgjcCAQQw
// SIG // HAYKKwYBBAGCNwIBCzEOMAwGCisGAQQBgjcCARUwLwYJ
// SIG // KoZIhvcNAQkEMSIEIKIX4Udx4U4AdMn9MnuHG+bn5tt2
// SIG // e42s/w5Ec/DcmBeMMDwGCisGAQQBgjcKAxwxLgwsc1BZ
// SIG // N3hQQjdoVDVnNUhIcll0OHJETFNNOVZ1WlJ1V1phZWYy
// SIG // ZTIyUnM1ND0wWgYKKwYBBAGCNwIBDDFMMEqgJIAiAE0A
// SIG // aQBjAHIAbwBzAG8AZgB0ACAAVwBpAG4AZABvAHcAc6Ei
// SIG // gCBodHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vd2luZG93
// SIG // czANBgkqhkiG9w0BAQEFAASCAQCWB6PtuK4Ketx+awXT
// SIG // 80le+FJq1Tm2o/zqtzRRZKPDooDzQ3t8nnJS7n7Ta9rm
// SIG // c1vLt48Teg9TUp81WB+LMqJJVM0KNyDglZQTNJFDBj9C
// SIG // mcWu+/jJyyw1Xj+/k1vt1AsRkZaWAVPut91IuwAPO7C9
// SIG // Puxgq0LGn2Hew/lYf2L0K/L6ndTQNZQVxYJ00dIepwFd
// SIG // 6MZq2PbXgucXc9kDpHsnJOR7WCCYL8NRmXtPxaO70HFU
// SIG // b3U1oBDnVt1SZs+HKGdzNrjSNn5y4L6PNwIiwAsL3c5k
// SIG // 34eRcrBAu+WszwsyF84fR9fBUiMIJyYQ+qDtd3OGPRmJ
// SIG // 0AKQYIg+kzQ4jdxb
// SIG // End signature block
