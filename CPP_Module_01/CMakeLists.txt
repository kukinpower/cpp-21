cmake_minimum_required(VERSION 3.17)
project(CPP_Module01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00
        ex00/main.cpp
        ex00/Pony.cpp)

add_executable(ex05
        ex05/Brain.cpp
        ex05/Human.cpp
        ex05/main.cpp)