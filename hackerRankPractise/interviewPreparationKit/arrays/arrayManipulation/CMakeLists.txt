cmake_minimum_required(VERSION 3.10)

# set the project name
project(arrayManipulation)

# add the executable
add_executable(arrayManipulation.cpp)

target_sources(arrayManipulation.cpp
        PRIVATE
        arrayManipulation.cpp
        )