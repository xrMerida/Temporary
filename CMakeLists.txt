cmake_minimum_required(VERSION 3.16)
project(Herencia)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB SOURCES src/*.cpp)
add_executable(herencia ${SOURCES})
target_include_directories(herencia PRIVATE include include/herencia)
