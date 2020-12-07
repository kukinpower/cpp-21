cmake_minimum_required(VERSION 3.17)
project(ex01)

#add_subdirectory(Google_tests)

set(CMAKE_CXX_STANDARD 98)
include_directories(.)

add_executable(ex01
        phonebook.cpp
        Phonebook.class.cpp
        Contact.class.cpp)