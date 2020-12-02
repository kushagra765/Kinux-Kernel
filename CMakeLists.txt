cmake_minimum_required(VERSION 3.17)
project(cat time)

set(CMAKE_C_STANDARD 11)

add_executable(time time.c cat cat.c)
