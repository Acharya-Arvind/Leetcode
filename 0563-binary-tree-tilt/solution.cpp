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
    int ans=0;
    int  backtrack(TreeNode* root){
        if(!root) return 0;
        int left=backtrack(root->left);
        int right=backtrack(root->right);
        int num=root->val;
        root->val=abs(left-right);
        ans+=root->val;
        return num+left+right;
    }
    int findTilt(TreeNode* root) {
        int h=backtrack(root);
        return ans;
    }
};
