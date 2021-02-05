; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

dd IMAGE_TAG
; ##########################################################################

    include rand.asm
    include modex.asm
    include data.asm
    include font.asm
    include keyb.asm
    include timer.asm
    include object.asm
    drawhline proto :word, :word, :word, :byte
    drawvline proto :word, :word, :word, :byte

; ##########################################################################
main proc

    local x:sword, x2:sword, l1:sword, l2:sword, l3:sword, l4:sword, l5:sword, l6:sword
    local buffer[20]:byte, start_count:dword, fps:dword, fps_count:dword, float_count:dword

    mov x, -7
    mov x2, 100
    mov l1, 0
    mov l2, 0
    mov l3, 35
    mov l4, 100
    mov l5, 5
    mov l6, 200
    mov start_count, 0
    mov fps, 0
    mov fps_count, 0
    invoke init_keyb
    invoke init_timer
    invoke init_objects
    invoke setmodex
    invoke setpalcolor, 255, -1, -1, 0
    invoke setpalcolor, 200, 8, 9, 25

@@: invoke setvideomemory, 200
    invoke drawgraphic, x, 50, 7, 13, addr graphic_man
    inc x
    .if x > 319
        mov x, -7
    .endif
    add x2, 3
    .if x2 > 319
        mov x2, -7
    .endif
    sub l1, 3
    .if l1 < -2
        add l1, 240
    .endif
    invoke drawhline, 0, l1, 320, COLOR_GREEN
    inc l1
    invoke drawhline, 0, l1, 320, COLOR_GREEN
    inc l1
    invoke drawhline, 0, l1, 320, COLOR_GREEN
    sub l1, 2
    add l2, 5
    .if l2 > 319
        sub l2, 320
    .endif
    invoke drawvline, l2, 0, 240, COLOR_ORANGE
    add l3, 3
    .if l3 > 319
        sub l3, 320
    .endif
    invoke drawvline, l3, 0, 240, COLOR_YELLOW
    sub l4, 4
    .if l4 < 0
        add l4, 320
    .endif
    invoke drawvline, l4, 0, 240, COLOR_RED
    inc l5
    .if l5 > 239
        mov l5, -6
    .endif
    invoke drawhline, 0, l5, 320, COLOR_BLUE
    add l5, 3
    invoke drawhline, 0, l5, 320, COLOR_BLUE
    add l5, 3
    invoke drawhline, 0, l5, 320, COLOR_BLUE
    sub l5, 6

    invoke move_objects
    invoke draw_objects

    inc l6
    .if l6 > 800
        mov l6, 100
    .endif
    mov ax, l6
    shr ax, 2
    invoke print, 20, ax, txt("0123456789 11-22-33-44-55-66-77-88-99-00"), ds
    invoke print, 1, 228, txt("!#$%&'()*+,-./:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWX"), ds
    invoke print, 1, 234, txt("YZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~"), ds

    inc fps_count
    mov eax, tick_count
    sub eax, start_count
    .if eax >= 1000

        mov eax, fps_count
        mov fps, eax
        mov eax, tick_count
        mov start_count, eax
        mov fps_count, 0

    .endif

    fld timer_count
    fstp float_count

    invoke ltoa, fps, addr buffer, ss
    invoke print, 1, 1, addr buffer, ss
    invoke ltoa, tick_count, addr buffer, ss
    invoke print, 1, 7, addr buffer, ss
    invoke ftoa, float_count, addr buffer, ss
    invoke print, 1, 13, addr buffer, ss
    movzx ecx, last_key
    invoke ltoa, ecx, addr buffer, ss
    invoke print, 1, 19, addr buffer, ss

    invoke vsync
    jmp @B

main endp
; ##########################################################################
drawhline proc uses bx x:word, y:word, l:word, color:byte

    assume bx:sword

    mov bx, x
    add l, bx

    .while bx < l

        invoke setpixel, bx, y, color
        inc bx

    .endw

    assume bx:nothing

    ret

drawhline endp
; ##########################################################################
drawvline proc uses bx x:word, y:word, l:word, color:byte

    assume bx:sword

    mov bx, y
    add l, bx

    .while bx < l

        invoke setpixel, x, bx, color
        inc bx

    .endw

    assume bx:nothing

    ret

drawvline endp
; ##########################################################################
IMAGE_FOOTER