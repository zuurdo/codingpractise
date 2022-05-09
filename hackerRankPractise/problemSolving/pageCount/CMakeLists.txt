cmake_minimum_required(VERSION 3.10)

# set the project name
project(pageCount)

# add the executable
add_executable(pageCount.cpp)

target_sources(pageCount.cpp
        PRIVATE
        pageCount.cpp
        )