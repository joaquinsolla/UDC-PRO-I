cmake_minimum_required(VERSION 3.14)
project(Ej5 C)

set(CMAKE_C_STANDARD 99)

add_executable(Ej5 main.c)

target_link_libraries(Ej5 -lm)