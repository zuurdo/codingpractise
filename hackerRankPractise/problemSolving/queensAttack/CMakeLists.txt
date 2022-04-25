cmake_minimum_required(VERSION 3.10)

# set the project name
project(queensAttack)

# add the executable
add_executable(queensAttack.cpp)

target_sources(queensAttack.cpp
        PRIVATE
        queensAttack.cpp
        )