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
    void backtrack(TreeNode* root,vector<int>& ans,int l){
        if(!root) return;
        if(ans.size()==l) ans.push_back(root->val);
        backtrack(root->right,ans,l+1);
        backtrack(root->left,ans,l+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        backtrack(root,ans,0);
        return ans;
    }
};
