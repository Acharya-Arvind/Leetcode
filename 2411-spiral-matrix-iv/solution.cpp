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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1));
        ListNode* temp=head;
        int i=0;
        while(temp){
            for(int j=i;j<n-i && temp;j++){
                ans[i][j]=temp->val;
                temp=temp->next;
            }
            for(int j=i+1;j<m-i && temp;j++){
                ans[j][n-1-i]=temp->val;
                temp=temp->next;
            }
            for(int j=n-2-i;j>=i && temp;j--){
                ans[m-1-i][j]=temp->val;
                temp=temp->next;
            }
            for(int j=m-2-i;j>=i+1 && temp;j--){
                ans[j][i]=temp->val;
                temp=temp->next;
            }
            i++;
        }
        return ans;
     }
};
