cmake_minimum_required(VERSION 3.10)

# set the project name
project(jumpingOnClouds)

# add the executable
add_executable(jumpingOnClouds.cpp)

target_sources(jumpingOnClouds.cpp
        PRIVATE
        jumpingOnClouds.cpp
        )