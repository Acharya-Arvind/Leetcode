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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* cur=head;
        ListNode* prev=head;
        map<int,int> a;
        while(cur!=NULL){
            a[cur->val]++;

            cur=cur->next;
        }
        auto it=a.begin();
        cur=head;
        int c=0;
        while(it!=a.end()){
            if(it->second==1){
            cur->val=it->first;
            prev=cur;
            cur=cur->next;
            c=1;
            cout<<"hi";
            }
            it++;
        }
        if(c==0) return NULL;
        prev->next=NULL;
        return head;
    }
};
