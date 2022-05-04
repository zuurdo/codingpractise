cmake_minimum_required(VERSION 3.10)

# set the project name
project(fiveDigits)

# add the executable
add_executable(fiveDigits.cpp)

target_sources(fiveDigits.cpp
        PRIVATE
        fiveDigits.cpp
        )