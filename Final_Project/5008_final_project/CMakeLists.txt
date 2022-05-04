cmake_minimum_required(VERSION 3.21)
project(project_copy)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(project_copy
        airQualityType.h
        airQualityTypeImp.cpp
        date.h
        dateImp.cpp
        Main.cpp
        Time.cpp
        Time.h)
