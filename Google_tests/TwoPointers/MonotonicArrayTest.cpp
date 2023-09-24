//
// Created by Michael Lewis on 9/24/23.
//

#include <vector>

#include "gtest/gtest.h"

#include "../../src/TwoPointers/MonotonicArray.hpp"

TEST(MonotonicArray, TestCase1)
{
    std::vector<int> vec{-1, -5, -10, -1100, -1100, -1101, -1102, -9001};
    EXPECT_TRUE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase2)
{
    std::vector<int> vec{};
    EXPECT_TRUE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase3)
{
    std::vector<int> vec{1};
    EXPECT_TRUE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase4)
{
    std::vector<int> vec{1, 2};
    EXPECT_TRUE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase5)
{
    std::vector<int> vec{2, 1};
    EXPECT_TRUE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase6)
{
    std::vector<int> vec{1, 5, 10, 1100, 1101, 1102, 9001};
    EXPECT_TRUE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase7)
{
    std::vector<int> vec{-1, -5, -10, -1100, -1101, -1102, -9001};
    EXPECT_TRUE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase8)
{
    std::vector<int> vec{-1, -5, -10, -1100, -900, -1101, -1102, -9001};
    EXPECT_FALSE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase9)
{
    std::vector<int> vec{1, 2, 0};
    EXPECT_FALSE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase10)
{
    std::vector<int> vec{1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 7, 9, 10, 11};
    EXPECT_FALSE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase11)
{
    std::vector<int> vec{1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 8, 9, 10, 11};
    EXPECT_TRUE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase12)
{
    std::vector<int> vec{-1, -1, -2, -3, -4, -5, -5, -5, -6, -7, -8, -7, -9, -10, -11};
    EXPECT_FALSE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase13)
{
    std::vector<int> vec{-1, -1, -2, -3, -4, -5, -5, -5, -6, -7, -8, -8, -9, -10, -11};
    EXPECT_TRUE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase14)
{
    std::vector<int> vec{-1, -1, -1, -1, -1, -1, -1, -1};
    EXPECT_TRUE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase15)
{
    std::vector<int> vec{1, 2, -1, -2, -5};
    EXPECT_FALSE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase16)
{
    std::vector<int> vec{-1, -5, 10};
    EXPECT_FALSE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase17)
{
    std::vector<int> vec{2, 2, 2, 1, 4, 5};
    EXPECT_FALSE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase18)
{
    std::vector<int> vec{1, 1, 1, 2, 3, 4, 1};
    EXPECT_FALSE(MonotonicArray::isMonotonic(vec));
}

TEST(MonotonicArray, TestCase19)
{
    std::vector<int> vec{1, 2, 3, 3, 2, 1};
    EXPECT_FALSE(MonotonicArray::isMonotonic(vec));
}