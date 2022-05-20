cmake_minimum_required(VERSION 3.10)

# set the project name
project(catAndMouse)

# add the executable
add_executable(catAndMouse.cpp)

target_sources(catAndMouse.cpp
        PRIVATE
        catAndMouse.cpp
        )