cmake_minimum_required(VERSION 3.10)

# set the project name
project(luckBalance)

# add the executable
add_executable(luckBalance.cpp)

target_sources(luckBalance.cpp
        PRIVATE
        luckBalance.cpp
        )