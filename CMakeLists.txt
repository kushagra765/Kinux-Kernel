cmake_minimum_required(VERSION 3.17)
project(Kinux_Kernel C)

set(CMAKE_C_STANDARD 11)

include_directories(include)
include_directories(include/kinux)
include_directories(include/sys)

add_executable(Kinux_Kernel
        drivers/ports/ports.c
        drivers/video/vga/vga.c
        kernel/panic.c)
