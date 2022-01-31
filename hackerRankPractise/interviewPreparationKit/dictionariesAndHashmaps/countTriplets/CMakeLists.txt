cmake_minimum_required(VERSION 3.10)

# set the project name
project(countTriplets.cpp)

# add the executable
add_executable(countTriplets.cpp)

target_sources(countTriplets.cpp
        PRIVATE
        countTriplets.cpp
        )