cmake_minimum_required(VERSION 3.15)

set(TARGET draugr)

add_executable(${TARGET} main.cpp)

project(draugr LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/..")

set_target_properties(${TARGET} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ../..)

SET(CMAKE_CXX_STANDARD 17)

SET(CMAKE_CXX_FLAGS "-std=c++17 -Wall -Wextra -Werror -Wpedantic")

include_directories(. ./src)

add_subdirectory(./src/)

target_link_libraries(${TARGET} libsrc)

target_include_directories( ${PROJECT_NAME} PUBLIC
       "${PROJECT_BINARY_DIR}"
       "${PROJECT_SOURCE_DIR}/src")
