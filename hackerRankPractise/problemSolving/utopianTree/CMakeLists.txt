cmake_minimum_required(VERSION 3.10)

# set the project name
project(utopianTree)

# add the executable
add_executable(utopianTree.cpp)

target_sources(utopianTree.cpp
        PRIVATE
        utopianTree.cpp
        )