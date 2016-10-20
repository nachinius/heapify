cmake_minimum_required(VERSION 3.6)
project(algC)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c")

set(SOURCE_FILES main.c)
add_executable(algC ${SOURCE_FILES})