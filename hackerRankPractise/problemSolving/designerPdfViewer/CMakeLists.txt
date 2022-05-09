cmake_minimum_required(VERSION 3.10)

# set the project name
project(designerPdfViewer)

# add the executable
add_executable(designerPdfViewer.cpp)

target_sources(designerPdfViewer.cpp
        PRIVATE
        designerPdfViewer.cpp
        )