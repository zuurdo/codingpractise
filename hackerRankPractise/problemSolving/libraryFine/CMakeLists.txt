cmake_minimum_required(VERSION 3.10)

# set the project name
project(libraryFine)

# add the executable
add_executable(libraryFine.cpp)

target_sources(libraryFine.cpp
        PRIVATE
        libraryFine.cpp
        )