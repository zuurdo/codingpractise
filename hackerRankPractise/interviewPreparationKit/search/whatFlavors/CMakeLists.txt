cmake_minimum_required(VERSION 3.10)

# set the project name
project(whatFlavorsp)

# add the executable
add_executable(whatFlavors.cpp)

target_sources(whatFlavors.cpp
        PRIVATE
        whatFlavors.cpp
        )