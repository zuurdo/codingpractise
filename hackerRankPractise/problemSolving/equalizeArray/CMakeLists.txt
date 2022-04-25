cmake_minimum_required(VERSION 3.10)

# set the project name
project(equalizeArray)

# add the executable
add_executable(equalizeArray.cpp)

target_sources(equalizeArray.cpp
        PRIVATE
        equalizeArray.cpp
        )