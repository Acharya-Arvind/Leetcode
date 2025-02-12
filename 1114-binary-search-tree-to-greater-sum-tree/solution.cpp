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
    void neworder(TreeNode* root,int& sum){
        if(!root) return;
        neworder(root->right,sum);
        int val=root->val;
        root->val+=sum;
        sum+=val;
        neworder(root->left,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        neworder(root,sum);
        return root;
    }
};
