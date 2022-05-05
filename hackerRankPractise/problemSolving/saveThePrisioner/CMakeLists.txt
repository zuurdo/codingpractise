cmake_minimum_required(VERSION 3.10)

# set the project name
project(saveThePrisioner)

# add the executable
add_executable(saveThePrisioner.cpp)

target_sources(saveThePrisioner.cpp
        PRIVATE
        saveThePrisioner.cpp
        )