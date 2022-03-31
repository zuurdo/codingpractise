cmake_minimum_required(VERSION 3.10)

# set the project name
project(hourglassSum)

# add the executable
add_executable(hourglassSum.cpp)

target_sources(hourglassSum.cpp
        PRIVATE
        hourglassSum.cpp
        )