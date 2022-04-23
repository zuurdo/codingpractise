cmake_minimum_required(VERSION 3.10)

# set the project name
project(taumBday)

# add the executable
add_executable(taumBday.cpp)

target_sources(taumBday.cpp
        PRIVATE
        taumBday.cpp
        )