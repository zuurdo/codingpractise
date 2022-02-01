cmake_minimum_required(VERSION 3.10)

# set the project name
project(twoStrings)

# add the executable
add_executable(twoStrings.cpp)

target_sources(twoStrings.cpp
        PRIVATE
        twoStrings.cpp
        )