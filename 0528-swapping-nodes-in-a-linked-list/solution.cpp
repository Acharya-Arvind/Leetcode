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
    ListNode* swapNodes(ListNode* head, int k) {
        int i=0;
        ListNode* l;
        ListNode* r;
        ListNode* temp=head;
        while(temp){
            i++;
            temp=temp->next;
        }
        int n=i-k+1;
        i=1;
        temp=head;
        while(temp)
        {
            if(i==k){
                l=temp;
            }
            if(i==n){
                r=temp;
            }
            temp=temp->next;
            i++;
        }
        int num=l->val;
        l->val=r->val;
        r->val=num;
        return head;
    }
};
