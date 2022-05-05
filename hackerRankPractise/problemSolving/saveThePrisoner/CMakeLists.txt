cmake_minimum_required(VERSION 3.10)

# set the project name
project(saveThePrisoner)

# add the executable
add_executable(saveThePrisoner.cpp)

target_sources(saveThePrisoner.cpp
        PRIVATE
        saveThePrisoner.cpp
        )