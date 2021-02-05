; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

include rand.inc
; ##########################################################################
getrand proc minimum:word, maximum:word

    invoke rand
    xor edx, edx
    movzx ecx, maximum
    sub cx, minimum
    div ecx
    mov ax, dx
    add ax, minimum

    ret

getrand endp
; ##########################################################################
rand proc

    mov eax, rand_z
    mov ecx, eax
    shr ecx, 16
    and eax, 0000FFFFh
    mov edx, 36969
    mul edx
    add eax, ecx
    mov rand_z, eax

    mov eax, rand_w
    mov ecx, eax
    shr ecx, 16
    and eax, 0000FFFFh
    mov edx, 18000
    mul edx
    add eax, ecx
    mov rand_w, eax

    mov eax, rand_z
    shr eax, 16
    add eax, rand_w

    ret

rand endp
; ##########################################################################