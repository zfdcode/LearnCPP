cmake_minimum_required(VERSION 3.10)
project(LearnCpp)

set(CMAKE_CXX_STANDARD 11)

set(GUROBI_PATH "/Library/gurobi752/mac64")

include_directories("${GUROBI_PATH}/include")

add_executable(LearnCpp main.cpp BSTree.cpp BSTree.h TestCpp.h)

target_link_libraries(LearnCpp "${GUROBI_PATH}/lib/libgurobi_c++.a")