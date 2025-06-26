#pragma once

#include "Tool.hpp"
#include "TypeInt.hpp"


class Solution{
    public:
    /**
     * 数列合并
     * @param: std::vector<int> 正序数列1
     * @param: std::vector<int> 正序数列2
     * @return: double 两个正序数列合并后的正序数列
     */
    static double findMedianSortedArrays(std::vector<int>, std::vector<int>);
};