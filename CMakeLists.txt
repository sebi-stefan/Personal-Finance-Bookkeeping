cmake_minimum_required(VERSION 3.28)
project(ClasePP)

set(CMAKE_CXX_STANDARD 17)

add_executable(ClasePP src/main.cpp
        src/intrare.cpp
        headers/intrare.h
        src/user.cpp
        headers/user.h
        src/util.cpp
        headers/util.h)
