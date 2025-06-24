#include "Tool.hpp"
#include "TypeInt.hpp"
#include "TwoAdd.hpp"



int main(int argc, char **argv){
    std::vector<int> nums1 = {1, 2, 4};
    std::vector<int> nums2 = {5, 6, 4};
    ListNode *n1 = TwoAdd::initListNode(nums1);
    ListNode *n2 = TwoAdd::initListNode(nums2);

    TwoAdd::printTest(n1);
    TwoAdd::printTest(n2);

    ListNode *result = TwoAdd::addTwoNumbers(n1, n2);
    TwoAdd::printTest(result);
    return 0;
}