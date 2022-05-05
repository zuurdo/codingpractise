cmake_minimum_required(VERSION 3.10)

# set the project name
project(permutationEquation)

# add the executable
add_executable(permutationEquation.cpp)

target_sources(permutationEquation.cpp
        PRIVATE
        permutationEquation.cpp
        )