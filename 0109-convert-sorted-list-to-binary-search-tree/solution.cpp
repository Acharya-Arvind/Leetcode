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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* help(int start,int end,vector<int>& ans){
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode* newnode=new TreeNode(ans[mid]);
        newnode->left=help(start,mid-1,ans);
        newnode->right=help(mid+1,end,ans);
        return newnode;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> ans;
        while(head){
            ans.push_back(head->val);
            head=head->next;
        }
        return help(0,ans.size()-1,ans);
    }
};
