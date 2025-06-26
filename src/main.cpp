#include "Tool.hpp"
#include "TypeInt.hpp"
#include "Solution.hpp"



int main(int argc, char **argv){
    std::vector<int> nums1 = {1, 2};
    std::vector<int> nums2 = {3, 4};
    double result = Solution::findMedianSortedArrays(nums1, nums2);
    std::cout << "result: " << result << std::endl;
    return 0;
}