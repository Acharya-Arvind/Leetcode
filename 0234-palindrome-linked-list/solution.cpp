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
    bool isPalindrome(ListNode* head) {

        ListNode* j=head;
        vector<int> a;
        while(j!=NULL){
            a.push_back(j->val);
            j=j->next;
        }
        for(int i=0,j=a.size()-1;i<a.size()/2;i++,j--){
            if(a[i]!=a[j]) return false;
        }
        return true;
        
    }
};
