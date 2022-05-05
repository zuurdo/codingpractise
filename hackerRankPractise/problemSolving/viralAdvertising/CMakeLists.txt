cmake_minimum_required(VERSION 3.10)

# set the project name
project(viralAdvertising)

# add the executable
add_executable(viralAdvertising.cpp)

target_sources(viralAdvertising.cpp
        PRIVATE
        viralAdvertising.cpp
        )