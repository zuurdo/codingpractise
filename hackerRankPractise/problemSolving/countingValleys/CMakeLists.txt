cmake_minimum_required(VERSION 3.10)

# set the project name
project(countingValleys)

# add the executable
add_executable(countingValleys.cpp)

target_sources(countingValleys.cpp
        PRIVATE
        countingValleys.cpp
        )