cmake_minimum_required(VERSION 3.10)

# set the project name
project(swapNodes)

# add the executable
add_executable(swapNodes.cpp)

target_sources(swapNodes.cpp
        PRIVATE
        swapNodes.cpp
        )