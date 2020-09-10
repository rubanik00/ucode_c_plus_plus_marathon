cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

add_compile_options(
    -pipe
    -Wall
    -Wextra
    -Werror
    -Wpedantic
)

set(TARGET utils)

include_directories(.)
project(${TARGET} VERSION 0.1 LANGUAGES CXX)
add_library(${TARGET} INTERFACE)
