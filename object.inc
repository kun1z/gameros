; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

OBJECT_COUNT equ 25

init_objects proto
move_objects proto
draw_objects proto

Tball struct
    x dw ?
    y dw ?
    d db ?
Tball ends

balls Tball OBJECT_COUNT dup(<>)