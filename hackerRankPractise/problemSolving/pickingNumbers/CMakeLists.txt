cmake_minimum_required(VERSION 3.10)

# set the project name
project(pickingNumbers.cpp)

# add the executable
add_executable(pickingNumbers.cpp)

target_sources(pickingNumbers.cpp
        PRIVATE
        pickingNumbers.cpp
        )