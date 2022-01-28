cmake_minimum_required(VERSION 3.10)

# set the project name
project(commonChild)

# add the executable
add_executable(commonChild.cpp)

target_sources(commonChild.cpp
        PRIVATE
        commonChild.cpp
        )