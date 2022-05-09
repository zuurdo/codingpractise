cmake_minimum_required(VERSION 3.10)

# set the project name
project(hurdleRace)

# add the executable
add_executable(hurdleRace.cpp)

target_sources(hurdleRace.cpp
        PRIVATE
        hurdleRace.cpp
        )