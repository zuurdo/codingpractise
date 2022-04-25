cmake_minimum_required(VERSION 3.10)

# set the project name
project(cutTheSticks)

# add the executable
add_executable(cutTheSticks.cpp)

target_sources(cutTheSticks.cpp
        PRIVATE
        cutTheSticks.cpp
        )