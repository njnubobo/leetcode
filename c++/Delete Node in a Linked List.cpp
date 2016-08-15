/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {  //删除列表的某个节点node
        node->val = node->next->val;   //node的next节点的值赋给node
        node->next = node->next->next; //node指向node的next的next
    }
};