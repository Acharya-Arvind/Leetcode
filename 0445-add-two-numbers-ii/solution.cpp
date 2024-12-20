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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* prev=NULL;
      ListNode* cur=l1;
      ListNode* next=NULL;
      while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
      }  
      ListNode* h1=prev;
      cur=l2;
      next=NULL;
      prev=NULL;
      while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
      }  
      ListNode* h2=prev;
      ListNode* dummy=new ListNode(0);
      cur=dummy;
      int carry=0;
      while(h1 || h2 || carry!=0){
        
        int sum=0;
        if(h1){
            sum+=h1->val;
            h1=h1->next;
        }
        if(h2){
            sum+=h2->val;
            h2=h2->next;
        }
        sum+=carry;
        carry=sum/10;
        ListNode* newnode=new ListNode(sum%10);
        cur->next=newnode;
        cur=cur->next;
      }
      
      cur=dummy->next;
      prev=NULL;
      next=NULL;
      while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
      }  
      return prev;
    }
};
