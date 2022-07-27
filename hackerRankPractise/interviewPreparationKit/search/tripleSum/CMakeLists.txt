cmake_minimum_required(VERSION 3.10)

# set the project name
project(tripleSum)

# add the executable
add_executable(tripleSum.cpp)

target_sources(tripleSum.cpp
        PRIVATE
        tripleSum.cpp
        )