cmake_minimum_required(VERSION 3.10)
project(cs648_week6 C)

set(CMAKE_C_STANDARD 99)

add_executable(smsh1 smsh1.c splitline.c execute.c)
