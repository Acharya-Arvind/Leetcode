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
    int mini=INT_MAX;
    TreeNode* prev=NULL;
    void backtrack(TreeNode* root){
        if(!root) return;
        backtrack(root->left);
        if(prev){
            mini=min(mini,abs(root->val-prev->val));
        }
        prev=root;
        backtrack(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        backtrack(root);
       return mini;
    }
};
