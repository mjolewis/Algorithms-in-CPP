cmake_minimum_required(VERSION 3.23)
project(Algorithms-in-CPP)

set(CMAKE_CXX_STANDARD 20)

add_executable(Algorithms-in-CPP
        "main.cpp"
        src/TwoPointers/LongestPalindrome.hpp)

enable_testing()
add_subdirectory(Google_tests)