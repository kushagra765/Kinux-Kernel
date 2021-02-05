cmake_minimum_required(VERSION 3.17)
project(Kinux_Kernel C)

set(CMAKE_C_STANDARD 11)

add_executable(Kinux_Kernel
        drivers/ports/ports.c
        drivers/video/vga/vga.c
        kernel/gdt.c
        kernel/idt.c
        kernel/isr.c
        kernel/panic.c)
