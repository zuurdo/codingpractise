cmake_minimum_required(VERSION 3.10)

# set the project name
project(sockMerchant)

# add the executable
add_executable(sockMerchant.cpp)

target_sources(sockMerchant.cpp
        PRIVATE
        sockMerchant.cpp
        )