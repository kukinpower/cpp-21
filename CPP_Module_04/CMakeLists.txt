cmake_minimum_required(VERSION 3.17)
project(CPP_Module02)

set(CMAKE_CXX_STANDARD 98)
SET(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -std=c++98")

add_executable(ex00
        ex00/Sorcerer.cpp
        ex00/Victim.cpp
        ex00/Peon.cpp
        ex00/Badass.cpp
        ex00/main.cpp)

add_executable(ex01
        ex01/AWeapon.cpp
        ex01/PowerFist.cpp
        ex01/PlasmaRifle.cpp
        ex01/Enemy.cpp
        ex01/SuperMutant.cpp
        ex01/RadScorpion.cpp
        ex01/Character.cpp
        ex01/LaserSword.cpp
        ex01/Badass.cpp
        ex01/main.cpp)

add_executable(ex02
        ex02/AssaultTerminator.cpp
        ex02/Squad.cpp
        ex02/TacticalMarine.cpp
        ex02/main.cpp)

file(GLOB
        EX03 "ex03/*.cpp")

add_executable(ex03
        ${EX03})
