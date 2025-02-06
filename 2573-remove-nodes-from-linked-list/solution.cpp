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
    ListNode* removeNodes(ListNode* head) {
        // vector<int> num;
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0);
        ListNode* cur=dummy;
        ListNode* ptr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(ptr){
            next=ptr->next;
            ptr->next=prev;
            prev=ptr;
            ptr=next;
        }
        int maxi=0;
        ptr=prev;
        while(ptr){
            if(maxi<=ptr->val){
                ListNode* newnode=new ListNode(ptr->val);
                newnode->next=cur->next;
                cur->next=newnode;
                maxi=ptr->val;
            }
            ptr=ptr->next;
        }
        
        return dummy->next;
    }
};


