; Copyright © 2013 - 2021 by Brett Kuntz. All rights reserved.

init_timer         proto
timer_handler      proto

IVT_IRQ0           equ 32
TIMER_DIVIDER      equ 1085
TIMER_RESOLUTION   equ 0.90933344880424746720602758172
PIT_PORT           equ 64

timer_resolution   dt  TIMER_RESOLUTION
timer_count        dt  0
tick_count         dd  0