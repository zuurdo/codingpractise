cmake_minimum_required(VERSION 3.10)

# set the project name
project(minMax)

# add the executable
add_executable(minMax.cpp)

target_sources(minMax.cpp
        PRIVATE
        minMax.cpp
        )