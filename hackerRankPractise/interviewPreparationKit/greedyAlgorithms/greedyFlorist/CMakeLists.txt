cmake_minimum_required(VERSION 3.10)

# set the project name
project(greedyFlorist)

# add the executable
add_executable(greedyFlorist.cpp)

target_sources(greedyFlorist.cpp
        PRIVATE
        greedyFlorist.cpp
        )