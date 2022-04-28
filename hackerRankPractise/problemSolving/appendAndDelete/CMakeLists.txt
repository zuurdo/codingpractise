cmake_minimum_required(VERSION 3.10)

# set the project name
project(appendAndDelete)

# add the executable
add_executable(appendAndDelete.cpp)

target_sources(appendAndDelete.cpp
        PRIVATE
        appendAndDelete.cpp
        )