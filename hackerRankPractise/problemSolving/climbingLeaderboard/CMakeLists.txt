cmake_minimum_required(VERSION 3.10)

# set the project name
project(climbingLeaderboard)

# add the executable
add_executable(climbingLeaderboard.cpp)

target_sources(climbingLeaderboard.cpp
        PRIVATE
        climbingLeaderboard.cpp
        )