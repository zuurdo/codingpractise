cmake_minimum_required(VERSION 3.10)

# set the project name
project(organizingCointainersOfBalls)

# add the executable
add_executable(organizingCointainersOfBalls.cpp)

target_sources(organizingCointainersOfBalls.cpp
        PRIVATE
        organizingCointainersOfBalls.cpp
        )