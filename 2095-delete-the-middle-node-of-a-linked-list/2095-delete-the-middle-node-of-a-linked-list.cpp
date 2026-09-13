/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* p=head;
        
        int c=0;
        while(p!=NULL ){
            c++;
            p=p->next;
        }
        if(c==1){
            return NULL;
        }
        c=c/2-1;
        p=head;
        while(c--){
            p=p->next;
        }
        p->next=p->next->next;
        return head;
        
    }
};