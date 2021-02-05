; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

print proto :word, :word, :word, :word
ltoa proto :dword, :word, :word
ftoa proto :dword, :word, :word

FONT_ARRAY dw 33 dup(0)
           dw offset FONT_HX21, offset FONT_HX22, offset FONT_HX23, offset FONT_HX24, offset FONT_HX25
           dw offset FONT_HX26, offset FONT_HX27, offset FONT_HX28, offset FONT_HX29, offset FONT_HX2A
           dw offset FONT_HX2B, offset FONT_HX2C, offset FONT_HX2D, offset FONT_HX2E, offset FONT_HX2F
           dw offset FONT_NUM0, offset FONT_NUM1, offset FONT_NUM2, offset FONT_NUM3, offset FONT_NUM4
           dw offset FONT_NUM5, offset FONT_NUM6, offset FONT_NUM7, offset FONT_NUM8, offset FONT_NUM9
           dw offset FONT_HX3A, offset FONT_HX3B, offset FONT_HX3C, offset FONT_HX3D, offset FONT_HX3E
           dw offset FONT_HX3F, offset FONT_HX40, offset FONT_HXAA, offset FONT_HXBB, offset FONT_HXCC
           dw offset FONT_HXDD, offset FONT_HXEE, offset FONT_HXFF, offset FONT_HXGG, offset FONT_HXHH
           dw offset FONT_HXII, offset FONT_HXJJ, offset FONT_HXKK, offset FONT_HXLL, offset FONT_HXMM
           dw offset FONT_HXNN, offset FONT_HXOO, offset FONT_HXPP, offset FONT_HXQQ, offset FONT_HXRR
           dw offset FONT_HXSS, offset FONT_HXTT, offset FONT_HXUU, offset FONT_HXVV, offset FONT_HXWW
           dw offset FONT_HXXX, offset FONT_HXYY, offset FONT_HXZZ, offset FONT_HX5B, offset FONT_HX5C
           dw offset FONT_HX5D, offset FONT_HX5E, offset FONT_HX5F, offset FONT_HX60, offset FONT_HXAA
           dw offset FONT_HXBB, offset FONT_HXCC, offset FONT_HXDD, offset FONT_HXEE, offset FONT_HXFF
           dw offset FONT_HXGG, offset FONT_HXHH, offset FONT_HXII, offset FONT_HXJJ, offset FONT_HXKK
           dw offset FONT_HXLL, offset FONT_HXMM, offset FONT_HXNN, offset FONT_HXOO, offset FONT_HXPP
           dw offset FONT_HXQQ, offset FONT_HXRR, offset FONT_HXSS, offset FONT_HXTT, offset FONT_HXUU
           dw offset FONT_HXVV, offset FONT_HXWW, offset FONT_HXXX, offset FONT_HXYY, offset FONT_HXZZ
           dw offset FONT_HX7B, offset FONT_HX7C, offset FONT_HX7D, offset FONT_HX7E

FONT_HX21 db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_HX22 db 99h, 255, 99h, 255, 99h
          db 99h, 255, 99h, 255, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h

FONT_HX23 db 99h, 255, 99h, 255, 99h
          db 255, 255, 255, 255, 255
          db 99h, 255, 99h, 255, 99h
          db 255, 255, 255, 255, 255
          db 99h, 255, 99h, 255, 99h

FONT_HX24 db 99h, 255, 255, 255, 255
          db 255, 99h, 255, 99h, 99h
          db 99h, 255, 255, 255, 99h
          db 99h, 99h, 255, 99h, 255
          db 255, 255, 255, 255, 99h

FONT_HX25 db 255, 255, 99h, 99h, 255
          db 255, 255, 99h, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 99h, 255, 255
          db 255, 99h, 99h, 255, 255

FONT_HX26 db 99h, 255, 255, 255, 99h
          db 255, 99h, 255, 99h, 99h
          db 99h, 255, 255, 255, 99h
          db 255, 99h, 255, 99h, 99h
          db 99h, 255, 255, 255, 99h

FONT_HX27 db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h

FONT_HX28 db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 99h, 99h, 99h
          db 99h, 255, 99h, 99h, 99h
          db 99h, 255, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_HX29 db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_HX2A db 99h, 255, 255, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 99h, 255, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h

FONT_HX2B db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 255, 255, 255, 255, 255
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_HX2C db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_HX2D db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 255
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h

FONT_HX2E db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_HX2F db 99h, 99h, 99h, 99h, 255
          db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 99h, 99h, 99h
          db 255, 99h, 99h, 99h, 99h

FONT_NUM0 db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255

FONT_NUM1 db 99h, 255, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 255, 255, 99h

FONT_NUM2 db 255, 255, 255, 255, 255
          db 99h, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 255

FONT_NUM3 db 255, 255, 255, 255, 255
          db 99h, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255
          db 99h, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255

FONT_NUM4 db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255
          db 99h, 99h, 99h, 99h, 255
          db 99h, 99h, 99h, 99h, 255

FONT_NUM5 db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 255
          db 99h, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255

FONT_NUM6 db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255

FONT_NUM7 db 255, 255, 255, 255, 255
          db 99h, 99h, 99h, 99h, 255
          db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_NUM8 db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255

FONT_NUM9 db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255
          db 99h, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255

FONT_HX3A db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h

FONT_HX3B db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 99h, 99h, 99h

FONT_HX3C db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 99h, 255, 99h

FONT_HX3D db 99h, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 255
          db 99h, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 255
          db 99h, 99h, 99h, 99h, 99h

FONT_HX3E db 99h, 255, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 99h, 99h, 99h

FONT_HX3F db 99h, 99h, 255, 255, 99h
          db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 255, 255, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_HX40 db 255, 255, 255, 255, 255
          db 255, 99h, 255, 99h, 255
          db 255, 99h, 255, 255, 255
          db 255, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 255

FONT_HXAA db 99h, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255

FONT_HXBB db 255, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 99h

FONT_HXCC db 99h, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 99h
          db 255, 99h, 99h, 99h, 255
          db 99h, 255, 255, 255, 99h

FONT_HXDD db 255, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 99h

FONT_HXEE db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 255

FONT_HXFF db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 99h
          db 255, 99h, 99h, 99h, 99h

FONT_HXGG db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 99h
          db 255, 99h, 99h, 255, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255

FONT_HXHH db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255

FONT_HXII db 255, 255, 255, 255, 255
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 255, 255, 255, 255, 255

FONT_HXJJ db 255, 255, 255, 255, 255
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 255, 255, 255, 99h, 99h

FONT_HXKK db 255, 99h, 99h, 255, 99h
          db 255, 99h, 255, 99h, 99h
          db 255, 255, 99h, 99h, 99h
          db 255, 99h, 255, 99h, 99h
          db 255, 99h, 99h, 255, 99h

FONT_HXLL db 255, 99h, 99h, 99h, 99h
          db 255, 99h, 99h, 99h, 99h
          db 255, 99h, 99h, 99h, 99h
          db 255, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 255

FONT_HXMM db 255, 99h, 99h, 99h, 255
          db 255, 255, 99h, 255, 255
          db 255, 99h, 255, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255

FONT_HXNN db 255, 99h, 99h, 99h, 255
          db 255, 255, 99h, 99h, 255
          db 255, 99h, 255, 99h, 255
          db 255, 99h, 99h, 255, 255
          db 255, 99h, 99h, 99h, 255

FONT_HXOO db 99h, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 99h, 255, 255, 255, 99h

FONT_HXPP db 255, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 99h
          db 255, 99h, 99h, 99h, 99h

FONT_HXQQ db 99h, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 255, 99h
          db 99h, 255, 255, 99h, 255

FONT_HXRR db 255, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 99h
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255

FONT_HXSS db 99h, 255, 255, 255, 255
          db 255, 99h, 99h, 99h, 99h
          db 99h, 255, 255, 255, 99h
          db 99h, 99h, 99h, 99h, 255
          db 255, 255, 255, 255, 99h

FONT_HXTT db 255, 255, 255, 255, 255
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_HXUU db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 99h, 255, 255, 255, 99h

FONT_HXVV db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 99h, 255, 99h, 255, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_HXWW db 255, 99h, 99h, 99h, 255
          db 255, 99h, 99h, 99h, 255
          db 255, 99h, 255, 99h, 255
          db 255, 99h, 255, 99h, 255
          db 99h, 255, 99h, 255, 99h

FONT_HXXX db 255, 99h, 99h, 99h, 255
          db 99h, 255, 99h, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 99h, 255, 99h
          db 255, 99h, 99h, 99h, 255

FONT_HXYY db 255, 99h, 99h, 99h, 255
          db 99h, 255, 99h, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_HXZZ db 255, 255, 255, 255, 255
          db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 99h, 99h, 99h
          db 255, 255, 255, 255, 255

FONT_HX5B db 99h, 99h, 255, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 255, 99h

FONT_HX5C db 255, 99h, 99h, 99h, 99h
          db 99h, 255, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 99h, 99h, 255

FONT_HX5D db 99h, 255, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 255, 99h, 99h

FONT_HX5E db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 99h, 255, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h

FONT_HX5F db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 255, 255, 255, 255, 255

FONT_HX60 db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h

FONT_HX7B db 99h, 99h, 255, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 99h, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 255, 99h

FONT_HX7C db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h

FONT_HX7D db 99h, 255, 255, 99h, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 99h, 99h, 255, 99h
          db 99h, 99h, 255, 99h, 99h
          db 99h, 255, 255, 99h, 99h

FONT_HX7E db 99h, 255, 255, 99h, 255
          db 255, 99h, 99h, 255, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h
          db 99h, 99h, 99h, 99h, 99h