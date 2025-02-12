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
    void inorder(TreeNode* root,int val,int& ans){
        if(!root) return;
        ans=max(ans,abs(val-root->val));
        inorder(root->left,val,ans);
        inorder(root->right,val,ans);
    }
    void traverse(TreeNode* root,int& ans){
        if(!root) return;
        inorder(root->left,root->val,ans);
        inorder(root->right,root->val,ans);
        traverse(root->left,ans);
        traverse(root->right,ans);
    }
    int maxAncestorDiff(TreeNode* root) {
        int ans=0;
        traverse(root,ans);
        return ans;
    }
};
