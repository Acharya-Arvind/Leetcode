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
    void backtrack(TreeNode* root,int& ans,int& count){
        if(!root){
            return;
        }
        backtrack(root->left,ans,count);
        count--;
        if(count==0){
            ans=root->val;
            return;
        }
        backtrack(root->right,ans,count);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
        backtrack(root,ans,k);
        return ans;
    }
};
