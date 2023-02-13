cmake_minimum_required(VERSION 3.24)
project(expression_tree)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(expression_tree
        ExpressionTree.hpp
        main.cpp)
