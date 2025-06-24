#include "Tool.hpp"
#include "TypeInt.hpp"
#include "Solution.hpp"



int main(int argc, char **argv){
    std::vector<int> nums1 = {1, 2, 4};
    std::vector<int> nums2 = {5, 6, 4};
    ListNode *n1 = Solution::initListNode(nums1);
    ListNode *n2 = Solution::initListNode(nums2);

    Solution::printTest(n1);
    Solution::printTest(n2);

    ListNode *result = Solution::addTwoNumbers(n1, n2);
    Solution::printTest(result);
    return 0;
}