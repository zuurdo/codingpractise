cmake_minimum_required(VERSION 3.10)

# set the project name
project(squares)

# add the executable
add_executable(squares.cpp)

target_sources(squares.cpp
        PRIVATE
        squares.cpp
        )