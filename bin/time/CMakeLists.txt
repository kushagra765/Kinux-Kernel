cmake_minimum_required(VERSION 3.17)
project(time C)

set(CMAKE_C_STANDARD 11)

add_executable(time cat.c)

target_include_directories(cat PUBLIC ${../include/stdio.h})
