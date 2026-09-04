cmake_minimum_required(VERSION 3.16)
project(MultiFile)

include_directories(include)

add_executable(multi_file
    src/main.cpp
    src/math_utils.cpp
)