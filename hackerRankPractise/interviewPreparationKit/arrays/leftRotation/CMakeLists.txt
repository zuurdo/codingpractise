cmake_minimum_required(VERSION 3.10)

# set the project name
project(leftRotation)

# add the executable
add_executable(leftRotation.cpp)

target_sources(leftRotation.cpp
        PRIVATE
        leftRotation.cpp
        )