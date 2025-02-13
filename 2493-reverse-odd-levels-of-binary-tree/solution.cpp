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
    void logic(TreeNode* root1,TreeNode* root2,int lv){
        if(!root1 && !root2) return;
        if(lv%2==0){
            int x=root1->val;
            root1->val=root2->val;
            root2->val=x;
        }
        logic(root1->left,root2->right,lv+1);
        logic(root1->right,root2->left,lv+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return NULL;
        logic(root->left,root->right,0);
        return root;
    }
};
