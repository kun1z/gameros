; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

include modex.inc
; ##########################################################################
setpalcolor proc palnum:byte, red:byte, green:byte, blue:byte

    mov dx, PAL_REG
    mov al, palnum
    cli
    out dx, al
    inc dx
    mov al, red
    out dx, al
    mov al, green
    out dx, al
    mov al, blue
    out dx, al
    sti

    ret

setpalcolor endp
; ##########################################################################
drawline proc uses bx si x:word, y:word, w:word, graphic:word

    mov bx, 0
    mov si, graphic

    .while bx < w

        lodsb
        invoke setpixel, x, y, al
        inc x
        inc bx

    .endw

    ret

drawline endp
; ##########################################################################
drawgraphic proc uses bx x:word, y:word, w:word, h:word, graphic:word

    mov bx, 0

    .while bx < h

        invoke drawline, x, y, w, graphic
        inc y
        mov ax, w
        add graphic, ax
        inc bx

    .endw

    ret

drawgraphic endp
; ##########################################################################
vsync proc

    mov dx, CRTC_INDEX
    mov ax, active_page
    mov al, 0Ch
    out dx, ax
    mov ax, 0Dh
    out dx, ax
    xor active_page, VIDEO_BUFFER_SIZE
    mov dx, STATUS_REG

    .repeat

        in al, dx
        or al, 11110110b
        inc al
        pause

    .until zero?

    ret

vsync endp
; ##########################################################################
setmodex proc

    pusha

    mov ax, 13h
    int 10h

    mov dx, SC_INDEX
    mov ax, 0604h
    out dx, ax
    mov ax, 100h
    out dx, ax

    mov dx, MISC_OUTPUT
    mov al, 0E7h
    out dx, al

    mov dx, SC_INDEX
    mov ax, 300h
    out dx, ax

    mov dx, CRTC_INDEX
    mov al, 11h
    out dx, al
    inc dx
    in al, dx
    and al, 7Fh
    out dx, al
    dec dx
    mov si, offset CRTParms
    mov cx, sizeof CRTParms / 2
    rep outsw

    invoke setwritemask, MASK_ALL

    les di, farptr(SCREEN_SEG, 0)
    xor eax, eax
    mov cx, 4000h
    rep stosd

    popa

    ret

setmodex endp
; ##########################################################################
setwritemask proc maskbits:byte

    mov dx, SC_INDEX
    mov al, 2
    mov ah, maskbits
    out dx, ax

    ret

setwritemask endp
; ##########################################################################
setvideomemory proc uses di es color:byte

    invoke setwritemask, MASK_ALL

    les di, farptr(SCREEN_SEG, 0)
    add di, active_page
    mov al, color
    mov ah, al
    push ax
    push ax
    pop eax
    mov cx, VIDEO_BUFFER_SIZE / 4
    rep stosd

    ret

setvideomemory endp
; ##########################################################################
setpixel proc uses di x:word, y:word, color:byte

    .if x < 320 && y < 240 && color != COLOR_CLEAR

        mov cx, x
        and cx, 3
        mov al, 1
        shl al, cl
        invoke setwritemask, al

        mov ax, y
        mov cx, ax
        shl ax, 6
        shl cx, 4
        add ax, cx
        mov di, x
        shr di, 2
        add di, ax
        add di, active_page

        mov ax, SCREEN_SEG
        mov fs, ax
        mov al, color
        mov fs:[di], al

    .endif

    ret

setpixel endp
; ##########################################################################