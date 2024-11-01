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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        if(head->next==NULL && head->val==val) return NULL;
        ListNode* ptr=head;
        ListNode* bef=head;
        while(ptr!=NULL){
            if(head->val==val){
            head=head->next;
            }
            if(ptr->val==val){
                bef->next=ptr->next;
                ptr=bef;

            }
            bef=ptr;
            ptr=ptr->next;
        }
        return head;
    }
};
