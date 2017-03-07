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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode head(0);
        ListNode* newList;
        newList = &head;
        ListNode* P1 = l1;
        ListNode* P2 = l2;
        int add = 0;
        while (P1 && P2){
            int newNum = (P1 -> val + P2 -> val + add) % 10 ;
            newList -> next = new ListNode(newNum);
            newList = newList -> next;
            add = (P1 -> val + P2 -> val + add) / 10;
            P1 = P1 -> next;
            P2 = P2 -> next;
        }
        while (P1) {
            newList -> next = new ListNode((P1 -> val + add) % 10);
            newList = newList -> next;
            add = (P1 -> val + add) / 10;
            P1 = P1 -> next;
        }
        while (P2){
            newList -> next = new ListNode((P2 -> val + add) % 10);
            newList = newList -> next;
            add = (P2 -> val + add) / 10;
            P2 = P2 -> next; 
        }
        if (add != 0){
            newList -> next = new ListNode(add);
        }
        return head.next;
        
        
    }
};
