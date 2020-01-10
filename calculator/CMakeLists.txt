cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)

project(Calculator)

add_library(calculator
    include/calculator.h
    src/ScienceCalculator.cpp
)


target_include_directories(
  calculator
  PUBLIC
    "include"
)

add_executable(cpp_demo
  src/main.cpp
)

target_link_libraries(cpp_demo calculator)