; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

include object.inc
; ##########################################################################
move_objects proc

    mov di, offset balls
    assume di:ptr Tball
    mov bx, OBJECT_COUNT

    .while bx > 0

        mov al, [di].d

        test al, 10b
        .if !zero?
            inc [di].x
        .else
            dec [di].x
        .endif

        test al, 01b
        .if !zero?
            inc [di].y
        .else
            dec [di].y
        .endif

        assume ax:sword

        mov ax, [di].x
        .if ax <= 0 || ax > 312
            xor [di].d, 10b
        .endif

        mov ax, [di].y
        .if ax <= 0 || ax > 232
            xor [di].d, 01b
        .endif

        assume ax:nothing

        add di, sizeof Tball
        dec bx

    .endw

    assume di:nothing

    ret

move_objects endp
; ##########################################################################
draw_objects proc

    mov di, offset balls
    assume di:ptr Tball
    mov bx, OBJECT_COUNT

    .while bx > 0

        invoke drawgraphic, [di].x, [di].y, 7, 7, addr graphic_ball

        add di, sizeof Tball
        dec bx

    .endw

    assume di:nothing

    ret

draw_objects endp
; ##########################################################################
init_objects proc uses di bx

    mov di, offset balls
    assume di:ptr Tball
    mov bx, OBJECT_COUNT

    .while bx > 0

        invoke getrand, 15, 298
        mov [di].x, ax
        invoke getrand, 15, 218
        mov [di].y, ax
        invoke getrand, 0, 4
        mov [di].d, al

        add di, sizeof Tball
        dec bx

    .endw

    assume di:nothing

    ret

init_objects endp
; ##########################################################################