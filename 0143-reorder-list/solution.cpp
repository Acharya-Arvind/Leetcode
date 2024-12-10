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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* ptr=NULL;

        if(!head || !head->next) return;
        while(fast && fast->next){
            ptr=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        ptr->next=NULL;

        ListNode* prev=NULL;
        while(slow){
            fast=slow->next;
            slow->next=prev;
            prev=slow;
            slow=fast;
        }

        
        ListNode* l1=head;
        ListNode* l2=prev;
        ListNode* temp=NULL;
        while(l1 && l2){
            ListNode* next1=l1->next;
            ListNode* next2=l2->next;
            l1->next=l2;
            l2->next=next1==NULL?next2:next1;
            l1=next1;
            l2=next2;
        }
        
    }
};
