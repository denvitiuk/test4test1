cmake_minimum_required(VERSION 3.17)
project(fibonacci)

set(CMAKE_CXX_STANDARD 14)

add_executable(fibonacci main.cpp fibonacci.h fibonacci.cpp)
project(test)
add_executable(tests test.cpp fibonacci.cpp)