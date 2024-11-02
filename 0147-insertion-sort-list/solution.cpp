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

    void swap(ListNode* i,ListNode* j){

        int c=i->val;
        i->val=j->val;
        j->val=c;
        }
    ListNode* insertionSortList(ListNode* head) {
        ListNode* i=head;
        ListNode* j=NULL;
        while(i!=NULL){
            j=i;
            while(j!=NULL){
                if(i->val > j->val){
                    swap(i,j);

                }
                j=j->next;
            }
            i=i->next;
        }
        return head;
        
    }
};
