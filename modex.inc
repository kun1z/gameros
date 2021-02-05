; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

setmodex            proto
setvideomemory      proto :byte
setwritemask        proto :byte
setpixel            proto :word, :word, :byte
drawgraphic         proto :word, :word, :word, :word, :word
drawline            proto :word, :word, :word, :word
vsync               proto
setpalcolor         proto :byte, :byte, :byte, :byte

SC_INDEX            equ 03C4h
CRTC_INDEX          equ 03D4h
MISC_OUTPUT         equ 03C2h
STATUS_REG          equ 03DAh
PAL_REG             equ 03C8h
SCREEN_SEG          equ 0A000h

VIDEO_BUFFER_SIZE   equ 4B00h

COLOR_RED           equ 40
COLOR_GREEN         equ 48
COLOR_BLUE          equ 32
COLOR_PINK          equ 36
COLOR_YELLOW        equ 44
COLOR_TEAL          equ 52
COLOR_WHITE         equ 31
COLOR_BLACK         equ 00
COLOR_LIGHT_GRAY    equ 28
COLOR_DARK_GRAY     equ 24
COLOR_ORANGE        equ 42
COLOR_BROWN         equ 06
COLOR_PURPLE        equ 05
COLOR_CLEAR         equ 99h

MASK_ALL            equ 1111b
MASK_ONE            equ 1000b
MASK_TWO            equ 0100b
MASK_THREE          equ 0010b
MASK_FOUR           equ 0001b

CRTParms dw 00d06h, 03e07h, 04109h, 0ea10h, 0ac11h, 0df12h, 00014h, 0e715h, 00616h, 0e317h
active_page dw VIDEO_BUFFER_SIZE