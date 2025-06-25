#pragma once

#include "Tool.hpp"
#include "TypeInt.hpp"

/**
 * Definition for singly-linked list.

 */

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
public:
    public:
    /**
     * addTwoNumbers: 计算和
     * @param: ListNode* : 数据1 的地址
     * @param: ListNode* : 数据2 的地址
     * @return: ListNode* : 结果的地址
     */
    static ListNode* addTwoNumbers(ListNode* , ListNode* );

    /**
     * initListNode: 利用存储位的表初始化一个ListNode
     * @param: std::vector<int> 初始化参数
     * @return: ListNode* 初始化结果
     */
    static ListNode* initListNode(std::vector<int>);

    /**
     * printTest: 控制台输出ListNode*
     * @param: ListNode* 需要打印的ListNode 对象
     * @return: void
     */
    static void printTest(ListNode *items);

    /**
     * free: 释放ListNode 对象的空间
     * @param: ListNdoe* 需要被释放的ListNode对象
     * @return: void
     */
    static void free(ListNode *items);
};

