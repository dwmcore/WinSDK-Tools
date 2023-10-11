;
; Copyright (c) Microsoft Corporation.  All rights reserved.
;

#include "ksarm64.h"
#include "arm64/arm64ASMsymbolname.h"

        AREA    |.text$mn$21|,ALIGN=5,CODE,READONLY

;
; void *memcpy(void *dst, const void *src, size_t length)
; void *memmove(void *dst, const void *src, size_t length)
; void *_memcpy_strict_align(void *dst, const void *src, size_t length)
;
; Copy a block of memory in a forward direction.
;

#if defined(_USE_NOALIGN_FUNCTION_NAME_)
        LEAF_ENTRY A64NAME(memcpy_noalign), |.text$$mn$$21|, 5
        ALTERNATE_ENTRY A64NAME(memmove_noalign)
#else
        LEAF_ENTRY A64NAME(memcpy), |.text$$mn$$21|, 5
        ALTERNATE_ENTRY A64NAME(memmove)
#endif

        sub     x3, x0, x1                              ; compute dest - source
        cmp     x3, x2                                  ; compare against size
        blo     __memcpy_noalign_reverse                ; if overlap, we must do it in reverse
        cbz     x3, __memcpy_noalign_ret                ; if dest==source, no work to do.

        ALTERNATE_ENTRY A64NAME(_memcpy_noalign_strict_align)
        ALTERNATE_ENTRY A64NAME(__memcpy_noalign_forward)

        prfm    pldl1strm, [x1]                         ; preload the first cache line
        cmp     x2, #8                                  ; less than 8 bytes?
        mov     x3, x0                                  ; use r3 as our destination
        bhs     __memcpy_noalign_forward_large_neon     ; if not, just do the large copy case
        tbz     x2, #2, %F16                            ; if not enough remaining, skip this load/store
        ld4     {v0.b,v1.b,v2.b,v3.b}[0], [x1], #4      ; load 4 bytes
        st4     {v0.b,v1.b,v2.b,v3.b}[0], [x3], #4      ; store 4 bytes
16
        tbz     x2, #1, %F17                            ; if not enough remaining, skip this load/store
        ld2     {v0.b,v1.b}[0], [x1], #2                ; load 2 bytes
        st2     {v0.b,v1.b}[0], [x3], #2                ; store 2 bytes
17
        tbz     x2, #0, %F18                            ; if not enough remaining, skip this load/store
        ldrb    w2, [x1]                                ; load 1 byte
        strb    w2, [x3]                                ; store 1 byte
18
__memcpy_noalign_ret
        ret                                             ; return

        LEAF_END

;
; __memcpy_noalign_forward_large_neon (internal calling convention)
;
; Copy large (>= 16 bytes) blocks of memory in a forward direction,
; using NEON registers.
;

        LEAF_ENTRY __memcpy_noalign_forward_large_neon, |.text$$mn$$21|, 5

        subs    x2, x2, #32                             ; pre-decrement to simplify the loop
        blo     %F13                                    ; skip over the loop if we don't have enough
        subs    x2, x2, #32                             ; pre-decrement to simplify the loop
        blo     %F12                                    ; skip over the loop if we don't have enough
        prfm    pldl1strm, [x1, #64]                    ; prefetch the next cacheline
        subs    x2, x2, #64                             ; pre-decrement to simplify the loop
        blo     %F11                                    ; skip over the loop if we don't have enough
10
        ldp     q0, q1, [x1]
        ldp     q2, q3, [x1, #32]
        ldp     q4, q5, [x1, #64]
        ldp     q6, q7, [x1, #96]

        add     x1, x1, #128

        prfm    pldl1strm, [x1, #128]                   ; prefetch a cacheline one block ahead
        prfm    pldl1strm, [x1, #192]                   ; prefetch another cacheline ahead

        stp     q0, q1, [x3]
        stp     q2, q3, [x3, #32]
        stp     q4, q5, [x3, #64]
        stp     q6, q7, [x3, #96]

        add     x3, x3, #128

        subs    x2, x2, #128                            ; count the bytes for this block
        bhs     %B10                                    ; keep going until we're done

        ;; use tbz instead of incrementing counter
        tbz     x2, #6, %F12                            ; if not enough remaining, skip this load/store
11
        ld1     {v0.16b,v1.16b,v2.16b,v3.16b}, [x1], #64; load 64 bytes
        st1     {v0.16b,v1.16b,v2.16b,v3.16b}, [x3], #64; store 64 bytes
12
        tbz     x2, #5, %F13                            ; if not enough remaining, skip this load/store
        ld1     {v0.16b,v1.16b}, [x1], #32              ; load 32 bytes
        st1     {v0.16b,v1.16b}, [x3], #32              ; store 32 bytes
13
        tbz     x2, #4, %F14                            ; if not enough remaining, skip this load/store
        ld1     {v0.16b}, [x1], #16                     ; load 16 bytes
        st1     {v0.16b}, [x3], #16                     ; store 16 bytes
14
        tbz     x2, #3, %F15                            ; if not enough remaining, skip this load/store
        ld1     {v0.8b}, [x1], #8                       ; load 8 bytes
        st1     {v0.8b}, [x3], #8                       ; store 8 bytes
15
        tbz     x2, #2, %F16                            ; if not enough remaining, skip this loop
        ld4     {v0.b,v1.b,v2.b,v3.b}[0], [x1], #4      ; load 4 bytes
        st4     {v0.b,v1.b,v2.b,v3.b}[0], [x3], #4      ; store 4 bytes
16
        tbz     x2, #1, %F17                            ; if not enough remaining, skip this load/store
        ld2     {v0.b,v1.b}[0], [x1], #2                ; load 2 bytes
        st2     {v0.b,v1.b}[0], [x3], #2                ; store 2 bytes
17
        tbz     x2, #0, %F18                            ; if not enough remaining, skip this load/store
        ldrb    w2, [x1]                                ; load 1 byte
        strb    w2, [x3]                                ; store 1 byte
18
        ret

        LEAF_END

;
; void *memmove(void *dst, const void *src, size_t length)
;
; Copy a block of memory in a forward or reverse direction, ensuring that
; overlapping source/destination regions are copied correctly.
;

        LEAF_ENTRY __memcpy_noalign_reverse, |.text$$mn$$21|, 5

        add     x1, x1, x2                              ; advance source to end
        prfum   pldl1strm, [x1,#-1]                     ; preload the first cache line
        cmp     x2, #8                                  ; less than 8 bytes?
        add     x3, x0, x2                              ; advance destination to end
        bhs     __memcpy_noalign_reverse_large_neon       ; go to the small copy case directly
        ;; use tbz instead of decrementing counter
        tbz     x2, #2, %F16                            ; if not enough remaining, skip this load/store
        sub     x1, x1, #4
        sub     x3, x3, #4
        ld4     {v0.b,v1.b,v2.b,v3.b}[0], [x1]          ; load 4 bytes
        st4     {v0.b,v1.b,v2.b,v3.b}[0], [x3]          ; store 4 bytes
16
        tbz     x2, #1, %F17                            ; if not enough remaining, skip this load/store
        sub     x1, x1, #2
        sub     x3, x3, #2
        ld2     {v0.b,v1.b}[0], [x1]                    ; load 2 bytes
        st2     {v0.b,v1.b}[0], [x3]                    ; store 2 bytes
17
        tbz     x2, #0, %F18                            ; if not enough remaining, skip this load/store
        ldrb    w2, [x1, #-1]!                          ; load 1 byte
        strb    w2, [x3, #-1]!                          ; store 1 byte
18
        ret                                             ; return

        LEAF_END


;
; __memcpy_noalign_reverse_large_neon (internal calling convention)
;
; Copy large (>= 16 bytes) block of memory in a reverse direction,
; using NEON registers.
;

        LEAF_ENTRY __memcpy_noalign_reverse_large_neon, |.text$$mn$$21|, 5

        subs    x2, x2, #32                             ; pre-decrement to simplify the loop
        blo     %F13                                    ; skip over the loop if we don't have enough
        subs    x2, x2, #32                             ; pre-decrement to simplify the loop
        blo     %F12                                    ; skip over the loop if we don't have enough
        prfum   pldl1strm, [x1, #-65]                   ; prefetch the next cacheline backwards
        subs    x2, x2, #64                             ; pre-decrement to simplify the loop
        blo     %F11                                    ; skip over the loop if we don't have enough
10
        sub     x1, x1, #128

        ldp     q6, q7, [x1, #96]
        ldp     q4, q5, [x1, #64]

        sub     x3, x3, #128

        ldp     q2, q3, [x1, #32]
        ldp     q0, q1, [x1]

        prfum   pldl1strm, [x1, #-129]                  ; prefetch a cacheline one block backwards
        prfum   pldl1strm, [x1, #-193]                  ; prefetch another cacheline backwards

        stp     q6, q7, [x3, #96]
        stp     q4, q5, [x3, #64]
        stp     q2, q3, [x3, #32]
        stp     q0, q1, [x3]

        subs    x2, x2, #128                            ; count the bytes for this block
        bhs     %B10                                    ; keep going until we're done

        tbz     x2, #6, %F12                            ; if not enough remaining, skip this load/store
11
        sub     x1, x1, #64
        sub     x3, x3, #64
        ld1     {v0.16b,v1.16b,v2.16b,v3.16b}, [x1]     ; load 64 bytes
        st1     {v0.16b,v1.16b,v2.16b,v3.16b}, [x3]     ; store 64 bytes
12
        tbz     x2, #5, %F13                            ; if not enough remaining, skip this load/store
        sub     x1, x1, #32
        sub     x3, x3, #32
        ld1     {v0.16b,v1.16b}, [x1]                   ; load 32 bytes
        st1     {v0.16b,v1.16b}, [x3]                   ; store 32 bytes
13
        tbz     x2, #4, %F14                            ; if not enough remaining, skip this load/store
        sub     x1, x1, #16
        sub     x3, x3, #16
        ld1     {v0.16b}, [x1]                          ; load 16 bytes
        st1     {v0.16b}, [x3]                          ; store 16 bytes
14
        tbz     x2, #3, %F15                            ; if not enough remaining, skip this load/store
        sub     x1, x1, #8
        sub     x3, x3, #8
        ld1     {v0.8b}, [x1]                           ; load 8 bytes
        st1     {v0.8b}, [x3]                           ; store 8 bytes
15
        tbz     x2, #2, %F16                            ; if not enough remaining, skip this load/store
        sub     x1, x1, #4
        sub     x3, x3, #4
        ld4     {v0.b,v1.b,v2.b,v3.b}[0], [x1]          ; load 4 bytes
        st4     {v0.b,v1.b,v2.b,v3.b}[0], [x3]          ; store 4 bytes
16
        tbz     x2, #1, %F17                            ; if not enough remaining, skip this load/store
        sub     x1, x1, #2
        sub     x3, x3, #2
        ld2     {v0.b,v1.b}[0], [x1]                    ; load 2 bytes
        st2     {v0.b,v1.b}[0], [x3]                    ; store 2 bytes
17
        tbz     x2, #0, %F18                            ; if not enough remaining, skip this load/store
        ldrb    w2, [x1, #-1]!                          ; load 1 byte
        strb    w2, [x3, #-1]!                          ; store 1 byte
18
        ret

        LEAF_END

        END
