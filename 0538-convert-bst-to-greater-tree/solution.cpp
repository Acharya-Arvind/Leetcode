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
    int num=0;
    void backtrack(TreeNode* root){
        if(!root) return;
        backtrack(root->right);
        num+=root->val;
        root->val=num;
        backtrack(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
    backtrack(root);
    return root;    
    }
};
