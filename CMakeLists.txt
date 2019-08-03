cmake_minimum_required(VERSION 3.10)
project(race)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_FLAGS "-g")

add_executable(race source/main.c source/main.h)
