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
    void deleteNode(ListNode* node) {  //ɾ���б��ĳ���ڵ�node
        node->val = node->next->val;   //node��next�ڵ��ֵ����node
        node->next = node->next->next; //nodeָ��node��next��next
    }
};