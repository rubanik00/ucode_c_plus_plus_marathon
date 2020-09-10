cmake_minimum_required(VERSION 3.18.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

project(lockpicking LANGUAGES CXX)

include_directories(app/src/)

add_subdirectory(app)
