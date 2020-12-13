cmake_minimum_required(VERSION 3.17)
project(cat C)

set(CMAKE_C_STANDARD 11)

add_executable(cat cat.c)

target_include_directories(cat PUBLIC ${../include/kinux/error.h ../include/stdio.h ../include/string.h})
