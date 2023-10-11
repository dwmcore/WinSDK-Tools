/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    hardware.c

Abstract:

    This file defines the global UART hardware driver table.

--*/

#include "common.h"

//
// The array order here is the serial subtype as specified
// in the Microsoft Debug Port Table 2 (DBG2) specification.
//

PUART_HARDWARE_DRIVER UartHardwareDrivers[] = {

#if defined(_X86_) || defined(_AMD64_)

    &Legacy16550HardwareDriver, // 0x0
    &Uart16550HardwareDriver,   // 0x1
    &SpiMax311HardwareDriver,   // 0x2
    NULL, NULL, NULL, NULL,     // 0x3-0x6
    NULL,                       // 0x7 = UEFI debug protocol
    NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, // 0x8-0x11
    &MM16550HardwareDriver,     // 0x12
    NULL,                       // 0x13
    &IaLpssHardwareDriver       // 0x14

#elif defined(_ARM_) || defined(_ARM64_)

    NULL,                       // 0x0
    &Uart16550HardwareDriver,   // 0x1
    NULL,                       // 0x2
    &PL011HardwareDriver,       // 0x3
    &MSM8x60HardwareDriver,     // 0x4
    &NvidiaHardwareDriver,      // 0x5
    &OmapHardwareDriver,        // 0x6
    NULL,                       // 0x7 = UEFI debug protocol
    &Apm88xxxxHardwareDriver,   // 0x8
    &MSM8974HardwareDriver,     // 0x9
    &Sam5250HardwareDriver,     // 0xA
    NULL,                       // 0xB
    &MX6HardwareDriver,         // 0xC
    &SBSA32HardwareDriver,      // 0xD
    &SBSAHardwareDriver,        // 0xE
    NULL,                       // 0xF = ARM DCC
    &Bcm2835HardwareDriver,     // 0x10
    &SDM845HardwareDriver,      // 0x11
    &MM16550HardwareDriver,     // 0x12
    &SDM845v2HardwareDriver,    // 0x13
    NULL                        // 0x14

#else

#error "Unknown Processor Architecture"

#endif

};

C_ASSERT(ARRAYSIZE(UartHardwareDrivers) == 21);

ULONG UartHardwareDriverCount = ARRAYSIZE(UartHardwareDrivers);
