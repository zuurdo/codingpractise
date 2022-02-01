cmake_minimum_required(VERSION 3.10)

# set the project name
project(markAndToys)

# add the executable
add_executable(markAndToys.cpp)

target_sources(markAndToys.cpp
        PRIVATE
        markAndToys.cpp
        )