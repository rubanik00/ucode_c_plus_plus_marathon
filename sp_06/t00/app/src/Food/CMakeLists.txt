cmake_minimum_required(VERSION 3.18.2)

file(GLOB CPPS "*.cpp")
add_library(food ${CPPS})
target_include_directories(food INTERFACE
							${CMAKE_CURRENT_SOURCE_DIR}
							)
