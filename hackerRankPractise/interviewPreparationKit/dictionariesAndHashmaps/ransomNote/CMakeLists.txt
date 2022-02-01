cmake_minimum_required(VERSION 3.10)

# set the project name
project(ransomNote)

# add the executable
add_executable(ransomNote.cpp)

target_sources(ransomNote.cpp
        PRIVATE
        ransomNote.cpp
        )