
cmake_minimum_required (VERSION 2.8.11)
project (LISTS)

add_executable (tests tests.cpp sll.cpp)

target_link_libraries (tests gtest)
