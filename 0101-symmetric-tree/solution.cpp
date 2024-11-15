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
    bool isSameTree(TreeNode* n1,TreeNode* n2 ){
        if(!n1 && !n2){
            return true;
        }
        if(n1 && n2 && n1->val == n2->val){
            return isSameTree(n1->left,n2->right) && isSameTree(n1->right, n2->left);
        }
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
       return isSameTree(root->left,root->right); 
    }
};
