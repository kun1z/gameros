; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

KERNEL_ADDR     equ  0200h
STACK_SEG       equ  9000h
BINARY_SIZE     equ  2000h
SECTOR_COUNT    equ  (BINARY_SIZE - 1) / 512
IMAGE_TAG       equ  12349292h
FOOTER_TAG      equ  69692388h
BIOS_SEG        equ  07C0h

int3            textequ  <xchg bx, bx>

intro macro
    cli
    mov ax, cs
    mov ds, ax
    mov es, ax
    lss sp, farptr(9000h, 0)
    mov eax, cr0
    and eax, 9FFFFFFBh
    or al, 2
    mov cr0, eax
    mov eax, cr4
    and ax, 9FB7h
    or eax, 600h
    mov cr4, eax
    cld
    finit
    sti
endm

enable_nmi macro
    in al, 70h
    and al, 7Fh
    out 70h, al
endm

disable_nmi macro
    in al, 70h
    or al, 80h
    out 70h, al
endm

halt macro
    local X
    X: hlt
    jmp X
endm

clrscr macro
    mov ax, 3
    int 10h
endm

dbgout macro txt:vararg
    local A, B
    cli
    jmp A
    B db txt
    A:
    clrscr
    mov ax, 1301h
    mov bx, 0Ah
    mov cx, sizeof B
    mov dx, 0
    push cs
    pop es
    mov bp, offset B
    int 10h
    sti
endm

eoi macro
    mov al, 20h
    out 20h, al
endm

reboot macro
    far_jmp 0FFFFh, 0000h
endm

far_jmp macro segarg:req, offarg:req
    db 0EAh
    dw offarg, segarg
endm

txt macro string:vararg
    local A, B
    jmp A
    B db string, 0
    A:
    exitm <offset B>
endm

farptr macro segarg:req, offarg:req
    local A, B
    jmp A
    B dd (segarg shl 16) or offarg
    A:
    exitm <B>
endm

BOOT_FOOTER macro
    org boot + 510
    dw 0AA55h
endm

IMAGE_FOOTER macro
    org boot + BINARY_SIZE - 4
    dd FOOTER_TAG
endm

option casemap:none
.model tiny, stdcall, farstack
.686p
.mmx
.xmm
.code