# 'Google_test' is the subproject name
project(Google_tests)

# 'lib' is the folder with Google Test sources
#add_subdirectory(lib)
add_subdirectory(lib/googletest-main)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
#add_executable(Google_Tests_run test1.cpp tests2.cpp)
add_executable(Google_Tests_run TwoPointers/LongestPalindromeTest.cpp
        TwoPointers/LongestPalindromeTest.cpp
        ../src/TwoPointers/LongestPalindrome.hpp
        QuickTest.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)