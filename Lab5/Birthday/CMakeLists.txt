cmake_minimum_required(VERSION 3.21)
project(Birthday)

set(CMAKE_CXX_STANDARD 14)

add_executable(Birthday main.cpp birthday.cpp birthday.h person.cpp person.h)
