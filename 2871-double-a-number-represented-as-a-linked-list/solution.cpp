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
    ListNode* doubleIt(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* dummy=new ListNode(0);
        ListNode* cur=dummy;
        ListNode* temp=head;
        string ans="";
        while(temp!=NULL){
            ans+=to_string(temp->val);
            temp=temp->next;
        }
        int carry=0;
        for(int i=ans.length()-1;i>=0;i--){
            int data=carry+((ans[i]-'0')*2);
            carry=data/10;
            ListNode* newnode=new ListNode(data%10);
            newnode->next=cur->next;
            cur->next=newnode;
            
        }
        if(carry!=0){
            ListNode* newnode=new ListNode(carry);
            newnode->next=cur->next;
            cur->next=newnode;
        }
        return dummy->next;
    }
};
