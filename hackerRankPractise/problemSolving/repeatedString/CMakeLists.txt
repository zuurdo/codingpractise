cmake_minimum_required(VERSION 3.10)

# set the project name
project(repeatedString)

# add the executable
add_executable(repeatedString.cpp)

target_sources(repeatedString.cpp
        PRIVATE
        repeatedString.cpp
        )