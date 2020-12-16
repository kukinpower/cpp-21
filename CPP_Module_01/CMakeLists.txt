cmake_minimum_required(VERSION 3.17)
project(CPP_Module01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00
        ex00/main.cpp
        ex00/Pony.cpp)

add_executable(ex01
        ex01/ex01.cpp)

add_executable(ex02
        ex02/Zombie.cpp
        ex02/ZombieEvent.cpp
        ex02/main.cpp)

add_executable(ex03
        ex03/Zombie.cpp
        ex03/ZombieHorde.cpp
        ex03/main.cpp)

add_executable(ex04
        ex04/ex04.cpp)

add_executable(ex05
        ex05/Brain.cpp
        ex05/Human.cpp
        ex05/main.cpp)

add_executable(ex06
        ex06/Weapon.cpp
        ex06/HumanA.cpp
        ex06/HumanB.cpp
        ex06/main.cpp)

add_executable(ex07
        ex07/File.cpp
        ex07/main.cpp)

add_executable(ex08
        ex08/Human.cpp
        ex08/main.cpp)
