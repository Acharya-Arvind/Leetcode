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
    int backtrack(TreeNode* root,bool isl){
           cout<<"hi";
        if(!root) return 0;
        if(!root->left && !root->right){
            return isl?root->val:0;
        }
        return backtrack(root->left,true)+backtrack(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        // if(!root->left && !root->right) return 0;
        return backtrack(root,false);
    }
};
