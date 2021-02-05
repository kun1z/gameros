; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

include gameros.inc
boot:far_jmp 07C0h, @F
; ##########################################################################

@@: intro

    clrscr

    call loadkernel

    dbgout "Kernel Load Failure"

    halt

; ##########################################################################
loadkernel proc

    local currdrv:byte

    mov currdrv, 0

    .repeat

        mov ah, 0
        mov dl, currdrv
        int 13h

        mov bx, KERNEL_ADDR
        mov dword ptr [bx], 0

        mov ah, 2
        mov al, SECTOR_COUNT
        mov cx, 2
        mov dh, 0
        mov dl, currdrv
        int 13h

        .if !carry?

            mov eax, ds:[KERNEL_ADDR]
            mov ecx, ds:[BINARY_SIZE - 4]

            .if eax == IMAGE_TAG && ecx == FOOTER_TAG

                call main
                reboot

            .endif

        .endif

        inc currdrv

    .until currdrv == 0

    ret

loadkernel endp
; ##########################################################################
BOOT_FOOTER
include main.asm
end boot