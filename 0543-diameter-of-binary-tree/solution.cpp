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

    int height(TreeNode* root,int &maxi){
        if(!root) return 0;
        int lf=1+height(root->left,maxi);
        int rt=1+height(root->right,maxi);
        maxi=max(maxi,lf-1+rt-1);
        return lf<rt?rt:lf;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        int dummy=height(root,maxi);
        return maxi;
    }
};
