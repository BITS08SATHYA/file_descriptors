cmake_minimum_required(VERSION 3.31)
project(file_descriptors)

set(CMAKE_CXX_STANDARD 20)

add_executable(file_descriptors main.cpp
        fds/source_files/open.c
        fds/source_files/read.c)
