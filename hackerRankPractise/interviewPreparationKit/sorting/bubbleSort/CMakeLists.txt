cmake_minimum_required(VERSION 3.10)

# set the project name
project(bubbleSort)

# add the executable
add_executable(bubbleSort.cpp)

target_sources(bubbleSort.cpp
        PRIVATE
        bubbleSort.cpp
        )