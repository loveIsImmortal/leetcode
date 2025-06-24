#include "Solution.hpp"
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

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *result = new ListNode(0);
    ListNode *result_copy = result;

    int x,y,z; // x : l1-val, y : l2-val , z : 补位标志 
    x=y=z=0; // 初始化
    while (result_copy != nullptr){
        x = l1 ? l1->val : 0; // 提取l1-val
        y = l2 ? l2->val : 0; // 提取l2-val
        z = (x + y + result_copy->val) / 10; // 验证是否补位 
        result_copy->val = (result_copy->val + x + y) % 10; // 计算当前位
        l1 = l1 ? l1->next : nullptr; // l1 进位
        l2 = l2 ? l2->next : nullptr; // l2 进位
        if (z || l1 || l2) // 判断结果是否需要进一位计算
            result_copy->next = new ListNode(z);
        result_copy = result_copy->next;
    }
    return result;
}

ListNode *Solution::initListNode(std::vector<int> nums)
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

void Solution::printTest(ListNode *items) {
    while (items){
        std::cout << items->val << " ";
        items = items->next;
    }
    std:: cout << std:: endl;
}

void Solution::free(ListNode *items){
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


// ListNode *result = new ListNode(0);
//     ListNode *result_index = result;
//     bool flag = false;

//     while (l1 && l2)
//     {
//         flag = l1->val + l2->val + result_index->val >= 10;
//         result_index->val = (l1->val + l2->val + result_index->val) % 10;
//         l1 = l1->next;
//         l2 = l2->next;
//         if (flag || l1 || l2)
//         {
//             result_index->next = new ListNode(flag);
//             result_index = result_index->next;
//             flag = false;
//         }
//     }

//     while (l1)
//     {
//         flag = l1->val + result_index->val >= 10;
//         result_index->val = (l1->val + result_index->val) % 10;
//         l1 = l1->next;
//         if (flag || l1 || l2)
//         {
//             result_index->next = new ListNode(flag);
//             result_index = result_index->next;
//             flag = false;
//         }
//     }

//     while (l2)
//     {
//         flag = l2->val + result_index->val >= 10;
//         result_index->val = (l2->val + result_index->val) % 10;
//         l2 = l2->next;
//         if (flag || l2)
//         {
//             result_index->next = new ListNode(flag);
//             result_index = result_index->next;
//             flag = false;
//         }
//     }
//     return result;