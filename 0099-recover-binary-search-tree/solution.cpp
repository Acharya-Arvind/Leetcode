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
    void inorderread(TreeNode* root,vector<int>& ans){
        if(root==NULL) return;
        inorderread(root->left,ans);
        ans.push_back(root->val);
        inorderread(root->right,ans);
    }
    void inorderwrite(TreeNode* root,vector<int>& ans){
        if(root==NULL) return;
        inorderwrite(root->left,ans);
        root->val=ans[0];
        ans.erase(ans.begin(),ans.begin()+1);
        inorderwrite(root->right,ans);
    }
    void recoverTree(TreeNode* root) {
        vector<int> ans;
        inorderread(root,ans);
        sort(ans.begin(),ans.end());
        inorderwrite(root,ans);
        
    }
};
