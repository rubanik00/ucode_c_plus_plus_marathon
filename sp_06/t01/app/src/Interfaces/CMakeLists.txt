cmake_minimum_required(VERSION 3.18.2)

project(interfaces LANGUAGES CXX)
add_library(interfaces INTERFACE)
target_include_directories(interfaces INTERFACE .)
