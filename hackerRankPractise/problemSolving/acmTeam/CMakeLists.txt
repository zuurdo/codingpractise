cmake_minimum_required(VERSION 3.10)

# set the project name
project(acmTeam)

# add the executable
add_executable(acmTeam.cpp)

target_sources(acmTeam.cpp
        PRIVATE
        acmTeam.cpp
        )