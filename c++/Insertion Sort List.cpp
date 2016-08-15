//Sort a linked list using insertion sort.

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
    ListNode* insertionSortList(ListNode* head) {
        
        ListNode* q_pre = head;
        ListNode* p_pre = head;
        if(!head){return head;}
        for (ListNode* p = head->next; p; p = p->next){
            for (ListNode* q = head; q && q != p;){
                if(p->val < q->val){ 
                    ListNode* temp = p;
                    if(q == head){   //比头指针小,插到头部
                        p = p->next;
                        p_pre->next = p;
                        temp->next = head;
                        head = temp;
                        p = p_pre;
                        break;
                    }else{     //插入到中间
                        p = p->next;
                        p_pre->next = p;
                        temp->next = q;
                        q_pre->next = temp;
                        p = p_pre;
                    }
                }else{
                    q_pre = q;
                    q = q->next;
                }
            }
            p_pre = p;
        }
        return head;
    }
};