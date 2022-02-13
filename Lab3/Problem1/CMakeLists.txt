cmake_minimum_required(VERSION 3.21)
project(Problem1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Problem1
        dayType.cpp
        dayType.h
        dayTypeMain.cpp)
