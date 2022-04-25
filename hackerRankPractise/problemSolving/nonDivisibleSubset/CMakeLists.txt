cmake_minimum_required(VERSION 3.10)

# set the project name
project(nonDivisibleSubset)

# add the executable
add_executable(nonDivisibleSubset.cpp)

target_sources(nonDivisibleSubset.cpp
        PRIVATE
        nonDivisibleSubset.cpp
        )