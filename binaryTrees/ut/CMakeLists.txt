cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)

add_executable(TestTraversals TestTraversals.cpp)
target_link_libraries(TestTraversals
    gtest_main
    gtest
    BinaryTreesLib
)

add_test(
    NAME TestTraversals
    COMMAND TestTraversals
)