;
; Copyright (c) Microsoft Corporation.  All rights reserved.
;

#include "ksarm64.h"
#include "arm64/arm64asmsymbolname.h"

        AREA    |.text$mn$21|,ALIGN=5,CODE,READONLY

;
; int
; memcmp( const void *r0, const void *r1, size_t r2 );
;
;   The memcmp function compares the first r2 bytes of r0
;   and r1 and returns a value indicating their relationship.
;      < 0  if r0 less than r1
;     == 0  if r0 identical to r1
;      > 0  if r0 greater than r1
;**********

        MACRO
        RETURN_X3_MINUS_X8
        subs    x0, x3, x8      ; result just has to have correct sign
                                ; if return type was 64-bit, could just return x0
                                ; return type is 32-bit, so set correct 32-bit sign
        csetne  w0              ; w0 is 1 if not equal, 0 if equal
        cneglo  w0, w0          ; w0 is -1 if less than
        ret
        MEND

        MACRO
        RETURN_X10_MINUS_X9
        subs    x0, x10, x9     ;
        csetne  w0              ; w0 is 1 if not equal, 0 if equal
        cneglo  w0, w0          ; w0 is -1 if less than
        ret
        MEND

        MACRO
        MEMCMP_1BYTE_AND_RETURN
        ldrb    w3, [x0], #1    ; Load character
        ldrb    w8, [x1], #1    ; Load character
        RETURN_X3_MINUS_X8
        MEND

        MACRO
        MEMCMP_2BYTE_FALLTHRU
        ldrh    w3, [x0], #2    ; Load 2 characters
        ldrh    w8, [x1], #2    ; Load 2 characters
        cmp     x3, x8          ; Are they the same?
        beq     %F1

        rev16   x3, x3          ; byte-wise reverse
        rev16   x8, x8          ; byte-wise reverse
        RETURN_X3_MINUS_X8
1
        MEND

        MACRO
        MEMCMP_2BYTE_AND_RETURN
        ldrh    w3, [x0], #2    ; Load 2 characters
        ldrh    w8, [x1], #2    ; Load 2 characters

        rev16   x3, x3          ; reverse bytes in 16-bit halfwords
        rev16   x8, x8          ; reverse bytes in 16-bit halfwords
        RETURN_X3_MINUS_X8
        MEND

        MACRO
        MEMCMP_4BYTE_FALLTHRU
        ldr     w3, [x0], #4    ; Load 4 characters
        ldr     w8, [x1], #4    ; Load 4 characters
        cmp     x8, x3          ; Do all characters match?
        beq     %F1

        rev32   x3, x3          ; reverse bytes in 32-bit words
        rev32   x8, x8          ; reverse bytes in 32-bit words
        RETURN_X3_MINUS_X8
1
        MEND

        MACRO
        MEMCMP_4BYTE_AND_RETURN
        ldr     w3, [x0], #4    ; Load 4 characters
        ldr     w8, [x1], #4    ; Load 4 characters

        rev32   x3, x3          ; reverse bytes in 32-bit words
        rev32   x8, x8          ; reverse bytes in 32-bit words
        RETURN_X3_MINUS_X8
        MEND

        MACRO
        MEMCMP_8BYTE_FALLTHRU
        ldr     x3, [x0], #8    ; Load 8 characters
        ldr     x8, [x1], #8    ; Load 8 characters
        cmp     x8, x3
        beq     %F1

        rev     x3, x3          ; reverse bytes
        rev     x8, x8          ; reverse bytes
        RETURN_X3_MINUS_X8
1
        MEND

        MACRO
        MEMCMP_8BYTE_AND_RETURN
        ldr     x3, [x0], #8    ; Load 8 characters
        ldr     x8, [x1], #8    ; Load 8 characters

        rev     x3, x3          ; reverse bytes
        rev     x8, x8          ; reverse bytes
        RETURN_X3_MINUS_X8
        MEND

        MACRO
        MEMCMP_16BYTE_UNROLL
        ldp     x3, x10, [x0], #16 ; Load 16 characters
        ldp     x8, x9, [x1], #16  ; Load 16 characters
        cmp     x8, x3
        bne     DWordCmpMismatch
        cmp     x10, x9
        bne     DWordX10X9CmpMismatch
        MEND

        MACRO
        MEMCMP_16BYTE_AND_RETURN
        ldp     x3, x10, [x0], #16 ; Load 16 characters
        ldp     x8, x9, [x1], #16  ; Load 16 characters
        cmp     x8, x3
        bne     DWordCmpMismatch
        rev     x10, x10        ; byte-wise reverse
        rev     x9, x9          ; byte-wise reverse
        RETURN_X10_MINUS_X9
        MEND

#if defined(_USE_NOALIGN_FUNCTION_NAME_)
        LEAF_ENTRY A64NAME(memcmp_noalign), |.text$$mn$$21|, 5
#else
        LEAF_ENTRY A64NAME(memcmp), |.text$$mn$$21|, 5
#endif

        ;; For tuning, it is safe to reduce MEMCMP_JUMPTABLE_LIMIT
        ;; When increasing MEMCMP_JUMPTABLE_LIMIT,
        ;; - add labels and code for memcmp_<n>; use fallthrus to keep code compact;
        ;; - add offsets to the jump table; ensure CmpTableLast points to the last entry.
#define MEMCMP_JUMPTABLE_LIMIT 16
#define MEMCMP_JUMPTABLE_MASK  0x1F

        cmp     x2, #MEMCMP_JUMPTABLE_LIMIT
        bgt     memcmp_32_large

memcmp_DoBytes
#ifdef _VCRUNTIME_BUILD_QSPECTRE
        and     x2, x2, #MEMCMP_JUMPTABLE_MASK ; prevent speculation outside of the jump table
#endif
        adr     x3, CmpTable        ; point to lookup table
        ldrb    w8, [x3, x2]        ; get unsigned byte offset to code
        sub     x3, x3, x8, lsl #2  ; compute final destination
        br      x3                  ; go there

        CFG_ALIGN
CmpTable_Target
memcmp_16
        MEMCMP_16BYTE_AND_RETURN
memcmp_13
        MEMCMP_8BYTE_FALLTHRU
memcmp_5
        MEMCMP_4BYTE_FALLTHRU
memcmp_1
        MEMCMP_1BYTE_AND_RETURN

memcmp_15
        MEMCMP_8BYTE_FALLTHRU
memcmp_7
        MEMCMP_4BYTE_FALLTHRU
memcmp_3
        MEMCMP_2BYTE_FALLTHRU
        MEMCMP_1BYTE_AND_RETURN

memcmp_14
        MEMCMP_8BYTE_FALLTHRU
memcmp_6
        MEMCMP_4BYTE_FALLTHRU
memcmp_2
        MEMCMP_2BYTE_AND_RETURN

memcmp_0
ReturnZero
        mov     x0, #0
        ret                         ; return

memcmp_12
        MEMCMP_8BYTE_FALLTHRU
memcmp_4
        MEMCMP_4BYTE_AND_RETURN

memcmp_8
        MEMCMP_8BYTE_AND_RETURN

memcmp_9
        MEMCMP_8BYTE_FALLTHRU
        MEMCMP_1BYTE_AND_RETURN
memcmp_10
        MEMCMP_8BYTE_FALLTHRU
        MEMCMP_2BYTE_AND_RETURN
memcmp_11
        MEMCMP_8BYTE_FALLTHRU
        MEMCMP_2BYTE_FALLTHRU
        MEMCMP_1BYTE_AND_RETURN

        align   8

        ;; Little benefit seen from unrolling beyond 32 bytes at at a time
memcmp_32_large
        cmp     x2, #32
        blt     DWordCmp

        sub     x2, x2, #32
memcmp_32_large_loop
        MEMCMP_16BYTE_UNROLL
        MEMCMP_16BYTE_UNROLL
        subs    x2, x2, #32
        bge     memcmp_32_large_loop

memcmp_32_Finish
        add     x2, x2, #32

DWordCmp
        cmp     x2, #MEMCMP_JUMPTABLE_LIMIT
        ble     memcmp_DoBytes
        sub     x2, x2, #8
DWordCmpLoop
        ldr     x3, [x0], #8    ; Load 8 characters
        ldr     x8, [x1], #8    ; Load 8 characters
        cmp     x8, x3          ; Do all characters match?
        bne     DWordCmpMismatch
        subs    x2, x2, #8
        bgt     DWordCmpLoop
        beq     memcmp_8

DWordCmpLt8
        add     x2, x2, #8

        ;; Inlining memcmp_DoBytes here, save a branch
#ifdef _VCRUNTIME_BUILD_QSPECTRE
        and     x2, x2, #MEMCMP_JUMPTABLE_MASK ; prevent speculation outside of the jump table
#endif
        adr     x3, CmpTable        ; point to lookup table
        ldrb    w8, [x3, x2]        ; get unsigned byte offset to code
        sub     x3, x3, x8, lsl #2  ; compute final destination
        br      x3                  ; go there

DWordX10X9CmpMismatch
        rev     x10, x10        ; byte-wise reverse
        rev     x9, x9          ; byte-wise reverse
        RETURN_X10_MINUS_X9

DWordCmpMismatch
        rev     x3, x3          ; byte-wise reverse
        rev     x8, x8          ; byte-wise reverse
        RETURN_X3_MINUS_X8

        align   16
        ;; force a compile-time failure if the table is too distant for byte offsets
        IF (CmpTable - CmpTable_Target) / 4 > 256
            info 1, "CmpTable too far away from jmp target"
        ENDIF

        LEAF_END

CmpTable
        dcb     (CmpTable - memcmp_0 ) / 4
        dcb     (CmpTable - memcmp_1 ) / 4
        dcb     (CmpTable - memcmp_2 ) / 4
        dcb     (CmpTable - memcmp_3 ) / 4
        dcb     (CmpTable - memcmp_4 ) / 4
        dcb     (CmpTable - memcmp_5 ) / 4
        dcb     (CmpTable - memcmp_6 ) / 4
        dcb     (CmpTable - memcmp_7 ) / 4
        dcb     (CmpTable - memcmp_8 ) / 4
        dcb     (CmpTable - memcmp_9 ) / 4
        dcb     (CmpTable - memcmp_10 ) / 4
        dcb     (CmpTable - memcmp_11 ) / 4
        dcb     (CmpTable - memcmp_12 ) / 4
        dcb     (CmpTable - memcmp_13 ) / 4
        dcb     (CmpTable - memcmp_14 ) / 4
        dcb     (CmpTable - memcmp_15 ) / 4
        dcb     (CmpTable - memcmp_16 ) / 4
#ifdef _VCRUNTIME_BUILD_QSPECTRE
        ; Set padding to fill possible table entries allowed by mask
        dcb     (CmpTable - memcmp_0) / 4 ; 17
        dcb     (CmpTable - memcmp_0) / 4 ; 18
        dcb     (CmpTable - memcmp_0) / 4 ; 19
        dcb     (CmpTable - memcmp_0) / 4 ; 20
        dcb     (CmpTable - memcmp_0) / 4 ; 21
        dcb     (CmpTable - memcmp_0) / 4 ; 22
        dcb     (CmpTable - memcmp_0) / 4 ; 23
        dcb     (CmpTable - memcmp_0) / 4 ; 24
        dcb     (CmpTable - memcmp_0) / 4 ; 25
        dcb     (CmpTable - memcmp_0) / 4 ; 26
        dcb     (CmpTable - memcmp_0) / 4 ; 27
        dcb     (CmpTable - memcmp_0) / 4 ; 28
        dcb     (CmpTable - memcmp_0) / 4 ; 29
        dcb     (CmpTable - memcmp_0) / 4 ; 30
        dcb     (CmpTable - memcmp_0) / 4 ; 31
#endif
CmpTableLast

        IF (CmpTableLast - CmpTable) <= MEMCMP_JUMPTABLE_LIMIT
            info 1, "insufficient jump table entries for MEMCMP_JUMPTABLE_LIMIT"
        ENDIF

        END
