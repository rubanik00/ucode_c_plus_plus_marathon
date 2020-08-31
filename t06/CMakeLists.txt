cmake_minimum_required(VERSION 3.18.2)

set(SOURCE main.cpp meadSong.cpp)
set(TARGET meadSong)

include_directories (.)

add_executable(${TARGET} ${SOURCE})

add_custom_command(TARGET ${TARGET} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy ./${TARGET} ..)