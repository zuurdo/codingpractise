cmake_minimum_required(VERSION 3.10)

# set the project name
project(reverseShuffleMerge)

# add the executable
add_executable(reverseShuffleMerge.cpp)

target_sources(reverseShuffleMerge.cpp
        PRIVATE
            reverseShuffleMerge.cpp
)