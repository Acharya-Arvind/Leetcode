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
    int backtrack(TreeNode* root,long rem){
        if(!root) return 0;
        rem-=root->val;
        return (rem==0)+backtrack(root->left,rem)+backtrack(root->right,rem);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        return backtrack(root,targetSum)+pathSum(root->left,targetSum)+pathSum(root->right,targetSum);
    }

};
