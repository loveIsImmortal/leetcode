#include "TwoNum.hpp"

/**
 * struct ListNode {
 *    int val;
 *    ListNode *next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 */

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* result = new ListNode(0);
    ListNode* result_index = result;
    bool flag = false;
    
    while (l1 && l2){
        result_index->val = (l1->val + l2->val + result_index->val) % 10;
        flag = l1->val + l2->val + flag >= 10;
        l1 = l1->next; l2 = l2->next;
        if (flag || l1 || l2){
            result_index->next = new ListNode(flag);
            result_index = result_index->next;
            flag = false;
        }
    }

    while (l1){
        result_index->val = (l1->val + result_index->val) % 10;
        flag = l1->val + flag >= 10;
        l1 = l1->next;
        if (flag || l1 || l2){
            result_index->next = new ListNode(flag);
            result_index = result_index->next;
            flag = false;
        }
    }

    while (l2){
        result_index->val = (l2->val + result_index->val) % 10;
        flag = l1->val + flag >= 10;
        l2 = l2->next;
        if (flag || l2){
            result_index->next = new ListNode(flag);
            result_index = result_index;
            flag = false;
        }
    }
    return result;
}