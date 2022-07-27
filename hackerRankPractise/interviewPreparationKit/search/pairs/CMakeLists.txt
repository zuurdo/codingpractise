cmake_minimum_required(VERSION 3.10)

# set the project name
project(pairs)

# add the executable
add_executable(pairs.cpp)

target_sources(pairs.cpp
        PRIVATE
        pairs.cpp
        )