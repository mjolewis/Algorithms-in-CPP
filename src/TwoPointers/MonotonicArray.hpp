//
// Write a function that accepts a vector and determines if the vector is monotonic.
// A sequence is said to be monotonic if each element is either strictly increasing,
// strictly decreasing, or unchanged relative to the previous element.
//
// Created by Michael Lewis on 9/24/23.
//

#ifndef ALGORITHMS_IN_CPP_MONOTONICARRAY_HPP
#define ALGORITHMS_IN_CPP_MONOTONICARRAY_HPP

#include <vector>

class MonotonicArray
{
public:
    static bool isMonotonic(std::vector<int> vec) {
        if (array.size() <= 1) return true;

        bool isMonotonicallyIncreasing = true;
        bool isMonotonicallyDecreasing = true;
        for (int i = 1; i < array.size(); ++i)
        {
            if (vec.at(i) < vec.at(i - 1)) isMonotonicallyIncreasing = false;
            if (vec.at(i) > vec.at(i - 1)) isMonotonicallyDecreasing = false;
        }

        return isMonotonicallyIncreasing || isMonotonicallyDecreasing;
    }
};

#endif //ALGORITHMS_IN_CPP_MONOTONICARRAY_HPP
