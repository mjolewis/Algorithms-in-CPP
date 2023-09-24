//
// Created by Michael Lewis on 9/21/23.
//

#ifndef ALGORITHMS_IN_CPP_LONGESTPALINDROME_HPP
#define ALGORITHMS_IN_CPP_LONGESTPALINDROME_HPP

#include <string>

class LongestPalindrome
{
private:
    // Finds the longest palindrome by continuously expanding outward until a palindrome no longer exists
    static std::pair<int, int> getLongestPalindromeFrom(const std::string& str, int leftIdx, int rightIdx)
    {
        while (leftIdx >= 0 && rightIdx < str.length())
        {
            if (str.at(leftIdx) != str.at(rightIdx)) break;
            --leftIdx;
            ++rightIdx;
        }

        return std::make_pair(++leftIdx, rightIdx);
    }

    // Finds the pair with the longest distance between indices
    static std::pair<int, int> calculateLongest(const std::pair<int, int> lhs, const std::pair<int, int> rhs)
    {
        return (lhs.second - lhs.first) > (rhs.second - rhs.first) ? lhs : rhs;
    }

public:
    // Finds the longest palindromic substring
    static std::string longestPalindromicSubstring(const std::string& str)
    {
        std::pair<int, int> longest = std::make_pair(0, 1);
        for (int i = 1; i < str.length(); ++i)
        {
            std::pair<int, int> evenLengthPalindrome = getLongestPalindromeFrom(str, i - 1, i);
            std::pair<int, int> oddLengthPalindrome = getLongestPalindromeFrom(str, i - 1, i + 1);
            std::pair<int, int> currentLongest = calculateLongest(evenLengthPalindrome, oddLengthPalindrome);
            longest = calculateLongest(longest, currentLongest);
        }

        return str.substr(longest.first, longest.second - longest.first);
    }
};

#endif //ALGORITHMS_IN_CPP_LONGESTPALINDROME_HPP
