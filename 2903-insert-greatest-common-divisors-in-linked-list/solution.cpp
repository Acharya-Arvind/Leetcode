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
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* cur=head->next;
        ListNode* prev=head;
        while(prev->next!=NULL && cur!=NULL){
            ListNode* newnode=new ListNode(gcd(prev->val,cur->val));
            prev->next=newnode;
            newnode->next=cur;
            cur=cur->next;
            prev=prev->next->next;
        }
        return head;
    }
};
