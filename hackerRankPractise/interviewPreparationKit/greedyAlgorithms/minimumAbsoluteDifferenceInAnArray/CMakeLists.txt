cmake_minimum_required(VERSION 3.10)

# set the project name
project(minimumAbsoluteDifferenceInAnArray)

# add the executable
add_executable(minimumAbsoluteDifferenceInAnArray.cpp)

target_sources(minimumAbsoluteDifferenceInAnArray.cpp
        PRIVATE
        minimumAbsoluteDifferenceInAnArray.cpp
        )