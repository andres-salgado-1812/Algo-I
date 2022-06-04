cmake_minimum_required(VERSION 3.21.1)
project(src)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)


add_executable(src
        generador.cpp
        generador.h
        main.cpp
        vectores.cpp
        vectores.h)