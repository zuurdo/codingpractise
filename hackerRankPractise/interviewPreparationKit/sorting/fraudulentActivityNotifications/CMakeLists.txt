cmake_minimum_required(VERSION 3.10)

# set the project name
project(fraudulentActivityNotifications)

# add the executable
add_executable(fraudulentActivityNotifications.cpp)

target_sources(fraudulentActivityNotifications.cpp
        PRIVATE
        fraudulentActivityNotifications.cpp
        )