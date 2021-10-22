cmake_minimum_required(VERSION 3.14)
project(Ej6 C)

set(CMAKE_C_STANDARD 99)

add_executable(Ej6 main.c)

target_link_libraries(Ej6 -lm)