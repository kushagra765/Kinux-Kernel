cmake_minimum_required(VERSION 3.17)
project(Kinux_Kernel C)

set(CMAKE_C_STANDARD 11)

add_executable(Kinux_Kernel
        drivers/ports/ports.c
        drivers/video/vga/vga.c
        drivers/keyboard/keyboard.c
        drivers/timer/timer.c
        kernel/gdt.c
        kernel/idt.c
        kernel/isr.c
        kernel/irq.c
        kernel/panic.c
        lib/libc/errno/errno.c
        lib/libc/string/strcmp.c)
