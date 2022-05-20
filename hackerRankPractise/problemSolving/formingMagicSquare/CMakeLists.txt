cmake_minimum_required(VERSION 3.10)

# set the project name
project(formingMagicSquare)

# add the executable
add_executable(formingMagicSquare.cpp)

target_sources(formingMagicSquare.cpp
        PRIVATE
        formingMagicSquare.cpp
        )