; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

include keyb.inc
; ##########################################################################
init_keyb proc

    mov ax, 0
    mov fs, ax
    cli
    mov word ptr fs:[IVT_IRQ1], offset key_handler
    mov word ptr fs:[IVT_IRQ1+2], BIOS_SEG
    sti

    ret

init_keyb endp
; ##########################################################################
key_handler proc uses ax

    in al, 60h
    mov last_key, al

    eoi
    iret

key_handler endp
; ##########################################################################