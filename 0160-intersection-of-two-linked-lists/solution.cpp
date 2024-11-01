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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> a;
        ListNode* ptr=headA;
        while(ptr!=NULL){
            a[ptr]++;
            ptr=ptr->next;
        }
        ptr=headB;
        while(ptr!=NULL){
            if(a[ptr]>0)
            return ptr;
            ptr=ptr->next;
        }
        return NULL;
    }
};
