cmake_minimum_required(VERSION 3.27)
project(Prvni_kroky)

set(CMAKE_CXX_STANDARD 20)

add_executable(Prvni_kroky main.cpp
        Promenne.cpp
        Pole_Struktury.cpp
        Vetveni_Cykly.cpp
        selectionSort.cpp
        bubbleSort.cpp
        binarySearch.cpp
        mergeSort.cpp
        quickSort.cpp
        binaryTree.cpp
        SDL2/sort.cpp
        SDL2/main.cpp
        SDL2/main.h
)
