cmake_minimum_required(VERSION 3.17)
project(Kinux-Kernel)

set(CMAKE_C_STANDARD 11)

add_executable(bin/cat/cat.c bin/time/time.c)
