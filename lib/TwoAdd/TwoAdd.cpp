#include "TwoAdd.hpp"
#include <stack>
/**
 * struct ListNode {
 *    int val;
 *    ListNode *next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 */

ListNode *TwoAdd::addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *result = new ListNode(0);
    ListNode *result_index = result;
    bool flag = false;

    while (l1 && l2)
    {
        flag = l1->val + l2->val + result_index->val >= 10;
        result_index->val = (l1->val + l2->val + result_index->val) % 10;
        l1 = l1->next;
        l2 = l2->next;
        if (flag || l1 || l2)
        {
            result_index->next = new ListNode(flag);
            result_index = result_index->next;
            flag = false;
        }
    }

    while (l1)
    {
        flag = l1->val + result_index->val >= 10;
        result_index->val = (l1->val + result_index->val) % 10;
        l1 = l1->next;
        if (flag || l1 || l2)
        {
            result_index->next = new ListNode(flag);
            result_index = result_index->next;
            flag = false;
        }
    }

    while (l2)
    {
        flag = l2->val + result_index->val >= 10;
        result_index->val = (l2->val + result_index->val) % 10;
        l2 = l2->next;
        if (flag || l2)
        {
            result_index->next = new ListNode(flag);
            result_index = result_index;
            flag = false;
        }
    }
    return result;
}

ListNode *TwoAdd::initListNode(std::vector<int> nums)
{
    ListNode *result = new ListNode(0);
    ListNode *result_index = result;
    unsigned long index = 0;
    do
    {
        result_index->val = nums[index];
        index++;
        if (index < nums.size() - 1 || index == nums.size() - 1 && nums[index] != 0)
        {
            result_index->next = new ListNode(0);
        }
        result_index = result_index->next;
    } while (result_index);
    return result;
}

void TwoAdd::printTest(ListNode *items) {
    while (items){
        std::cout << items->val << " ";
        items = items->next;
    }
    std:: cout << std:: endl;
}

void TwoAdd::free(ListNode *items){
    std::stack<ListNode*> cache;
    while (items){
        cache.push(items);
        items = items->next;
    }
    while (!cache.empty()){
        ListNode* node = cache.top();
        cache.pop();
        node->next = nullptr;
        delete node;
    }
}