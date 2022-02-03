cmake_minimum_required(VERSION 3.10)

# set the project name
project(newYearChaos)

# add the executable
add_executable(newYearChaos.cpp)

target_sources(newYearChaos.cpp
        PRIVATE
        newYearChaos.cpp
        )