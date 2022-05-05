cmake_minimum_required(VERSION 3.10)

# set the project name
project(circularArrayRotation)

# add the executable
add_executable(circularArrayRotation.cpp)

target_sources(circularArrayRotation.cpp
        PRIVATE
        circularArrayRotation.cpp
        )