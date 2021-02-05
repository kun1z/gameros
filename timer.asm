; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

include timer.inc
; ##########################################################################
init_timer proc

    mov ax, 0
    mov fs, ax
    cli
    mov word ptr fs:[IVT_IRQ0], offset timer_handler
    mov word ptr fs:[IVT_IRQ0+2], BIOS_SEG
    mov ax, TIMER_DIVIDER
    out PIT_PORT, al
    mov al, ah
    out PIT_PORT, al
    sti

    ret

init_timer endp
; ##########################################################################
timer_handler proc uses ax

    local fpu_save[94]:byte

    fsave fpu_save

    fld timer_resolution
    fld timer_count
    faddp
    fist tick_count
    fstp timer_count

    frstor fpu_save

    eoi
    iret

timer_handler endp
; ##########################################################################