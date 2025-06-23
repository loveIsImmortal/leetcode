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
    char cy = 0;
    bool flag = false;
    while (l1 && l2){
        result_index->val =  (l1->val + l2->val + flag ? 1 : 0) % 10 ;
        if (l1->next || l2->next || l1->val + l2->val >= 10){
            result_index->next = new ListNode(0);
            l1 = l1->next;
            l2 = l2->next;
            result_index = result_index->next;
        }
    }
    while (l1){
        result_index->val = (l1->val + flag)  % 10;
    }
}