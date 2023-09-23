//
// Created by Michael Lewis on 9/19/23.
//

#include "gtest/gtest.h"

#include <string>

#include "../../src/TwoPointers/LongestPalindrome.hpp"

TEST(LongestPalindrome, TestCase1)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("abaxyzzyxf");
    EXPECT_EQ("xyzzyx", actual);
}

TEST(LongestPalindrome, TestCase2)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("a");
    EXPECT_EQ("a", actual);
}

TEST(LongestPalindrome, TestCase3)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("it's highnoon");
    EXPECT_EQ("noon", actual);
}

TEST(LongestPalindrome, TestCase4)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("noon high it is");
    EXPECT_EQ("noon", actual);
}

TEST(LongestPalindrome, TestCase5)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("abccbait's highnoon");
    EXPECT_EQ("abccba", actual);
}

TEST(LongestPalindrome, TestCase6)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("abcdefgfedcbazzzzzzzzzzzzzzzzzzzz");
    EXPECT_EQ("zzzzzzzzzzzzzzzzzzzz", actual);
}

TEST(LongestPalindrome, TestCase7)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("abcdefgfedcba");
    EXPECT_EQ("abcdefgfedcba", actual);
}

TEST(LongestPalindrome, TestCase8)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("abcdefghfedcbaa");
    EXPECT_EQ("aa", actual);
}

TEST(LongestPalindrome, TestCase9)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("abcdefggfedcba");
    EXPECT_EQ("abcdefggfedcba", actual);
}

TEST(LongestPalindrome, TestCase10)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("zzzzzzz2345abbbba5432zzbbababa");
    EXPECT_EQ("zz2345abbbba5432zz", actual);
}

TEST(LongestPalindrome, TestCase11)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("z234a5abbbba54a32z");
    EXPECT_EQ("5abbbba5", actual);
}

TEST(LongestPalindrome, TestCase12)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("z234a5abbba54a32z");
    EXPECT_EQ("5abbba5", actual);
}

TEST(LongestPalindrome, TestCase13)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("ab12365456321bb");
    EXPECT_EQ("b12365456321b", actual);
}

TEST(LongestPalindrome, TestCase14)
{
    std::string actual = LongestPalindrome::longestPalindromicSubstring("aca");
    EXPECT_EQ("aca", actual);
}