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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return NULL;
        ListNode* temp=head;
        ListNode* ans1=new ListNode(0);
        ListNode* ans2=new ListNode(0);
        ListNode* ptr=ans1;
        ListNode* ptr1=ans2;
        temp=head;
        while(temp!=NULL){
            if(temp->val>=x){
                ptr->next=temp;
                ptr=ptr->next;
            }else{
                ptr1->next=temp;
                ptr1=ptr1->next;
            }
            temp=temp->next;
        }
        
        ptr1->next=ans1->next;
        ptr->next=NULL;
        return ans2->next;
    }
};



