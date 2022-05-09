cmake_minimum_required(VERSION 3.10)

# set the project name
project(extraLongFactorials)

# add the executable
add_executable(extraLongFactorials.cpp)

target_sources(extraLongFactorials.cpp
        PRIVATE
        extraLongFactorials.cpp
        )