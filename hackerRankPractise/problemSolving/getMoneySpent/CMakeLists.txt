cmake_minimum_required(VERSION 3.10)

# set the project name
project(getMoneySpent)

# add the executable
add_executable(getMoneySpent.cpp)

target_sources(getMoneySpent.cpp
        PRIVATE
        getMoneySpent.cpp
        )