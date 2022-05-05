cmake_minimum_required(VERSION 3.10)

# set the project name
project(angryProfessor)

# add the executable
add_executable(angryProfessor.cpp)

target_sources(angryProfessor.cpp
        PRIVATE
        angryProfessor.cpp
        )