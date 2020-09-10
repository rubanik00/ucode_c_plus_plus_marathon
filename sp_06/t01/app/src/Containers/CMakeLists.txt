cmake_minimum_required(VERSION 3.18.2)

file(GLOB CPPS "*.cpp")
add_library(containers ${CPPS})
target_include_directories(containers INTERFACE
							${CMAKE_CURRENT_SOURCE_DIR})