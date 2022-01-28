cmake_minimum_required(VERSION 3.10)

# set the project name
project(mergeSortCountingInversions)

# add the executable
add_executable(mergeSortCountingInversions.cpp)

target_sources(mergeSortCountingInversions.cpp
        PRIVATE
        mergeSortCountingInversions.cpp
        )