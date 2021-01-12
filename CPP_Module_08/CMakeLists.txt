cmake_minimum_required(VERSION 3.17)
project(CPP_Module02)

set(CMAKE_CXX_STANDARD 98)
SET(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -std=c++98")

file(GLOB
        EX00 "ex00/*.cpp")

add_executable(ex00
        ${EX00})

file(GLOB
        EX01 "ex01/*.cpp")

add_executable(ex01
        ${EX01})

file(GLOB
        EX02 "ex02/*.cpp")

add_executable(ex02
        ${EX02})
