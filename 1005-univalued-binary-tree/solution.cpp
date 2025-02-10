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
    bool backtrack(TreeNode* root,int x){
        if(!root) return true;
        if(root->val!=x) return false;
        return backtrack(root->left,x) && backtrack(root->right,x);
    }
    bool isUnivalTree(TreeNode* root) {
        
        return backtrack(root,root->val);
    }
};
