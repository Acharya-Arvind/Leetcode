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
    bool help(TreeNode* n1,TreeNode* n2){
        if(n1==NULL && n2==NULL){
            return true;
        }
        if( n1 && n2 && n1->val==n2->val){
            return help(n1->left,n2->right) && help(n1->right,n2->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return help(root->left,root->right);
    }
};
