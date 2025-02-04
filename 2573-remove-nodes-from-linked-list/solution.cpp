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
        vector<int> num;
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0);
        ListNode* cur=dummy;
        while(temp!=NULL){
            num.push_back(temp->val);
            temp=temp->next;
        }
        reverse(num.begin(),num.end());
        vector<int> ans;
        ans.push_back(num[0]);
        int maxi=num[0];
        for(int i=1;i<num.size();i++){
            if(maxi<=num[i]){
                ans.push_back(num[i]);
                maxi=num[i];
            }
        }
        for(int i=0;i<ans.size();i++){
            ListNode* newnode=new ListNode(ans[i]);
            newnode->next=cur->next;
            cur->next=newnode;
        }

        
        return dummy->next;
    }
};

// while(temp!=0){
        //     ListNode* temp2=temp;
        //     while(temp2!=NULL){
        //         if(temp->val<temp2->val){
        //             break;
        //         }
        //         temp2=temp2->next;
        //     }
        //     if(temp2==NULL){
        //         cur->next=temp;
        //         cur=cur->next;
        //     }
        //     temp=temp->next;
        // }
