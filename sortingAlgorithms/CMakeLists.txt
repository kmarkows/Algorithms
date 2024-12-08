cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(SortingAlgorithmsLib BubbleSort.cpp HeapSort.cpp InsertionSort.cpp MergeSort.cpp QuickSort.cpp SelectionSort.cpp)
