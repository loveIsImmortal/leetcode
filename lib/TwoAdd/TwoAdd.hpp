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

class TwoAdd{
public:
    public:
    static ListNode* addTwoNumbers(ListNode* , ListNode* );
    static ListNode* initListNode(std::vector<int>);
    static void printTest(ListNode *items);
    static void free(ListNode *items);
};

