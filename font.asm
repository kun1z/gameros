; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

include font.inc
; ##########################################################################
ftoa proc uses di es number:dword, string:word, segreg:word

    local mulamt:word

    mov di, string
    mov ax, segreg
    mov es, ax

    mov mulamt, 1000
    fild mulamt
    fmul number
    fistp number

    .if number & 80000000h

        mov al, '-'
        stosb
        neg number

    .endif

    mov dword ptr es:[di], '00.0'

    .if number < 10

        add di, 4

    .elseif number < 100

        add di, 3

    .elseif number < 1000

        add di, 2

    .endif

    invoke ltoa, number, di, es

    .if number >= 1000

        .while byte ptr es:[di] != 0

            inc di

        .endw

        mov eax, es:[di-3]
        mov es:[di-2], eax
        mov byte ptr es:[di-3], '.'

    .endif

    ret

ftoa endp
; ##########################################################################
ltoa proc uses bx si di es number:dword, string:word, segreg:word

    local pbcd:tbyte

    fild number
    fbstp pbcd
    lea si, pbcd
    mov di, string
    mov bx, 8
    mov ax, segreg
    mov es, ax
    mov cl, 0

    mov al, byte ptr ss:[si+9]

    .if al & 80h

        mov al, '-'
        stosb

    .endif

    .while bx != -1

        movzx ax, byte ptr ss:[si+bx]
        shl ax, 4
        shr al, 4

        .if ah != 0 || cl != 0

            add ah, 30h
            mov es:[di], ah
            inc di
            or cl, -1

        .endif

        .if al != 0 || cl != 0

            add al, 30h
            stosb
            or cl, -1

        .endif

        dec bx

    .endw

    .if cl == 0

        mov al, '0'
        stosb

    .endif

    mov byte ptr es:[di], 0

    ret

ltoa endp
; ##########################################################################
print proc uses bx si di es X:word, Y:word, string:word, segreg:word

    mov si, string
    mov di, offset FONT_ARRAY
    mov ax, segreg
    mov es, ax
    movzx bx, byte ptr es:[si]

    .while bx != 0

        .if bl > 20h

            shl bx, 1
            invoke drawgraphic, X, Y, 5, 5, word ptr [di+bx]

        .endif

        inc si
        add X, 7
        movzx bx, byte ptr es:[si]

    .endw

    ret

print endp
; ##########################################################################