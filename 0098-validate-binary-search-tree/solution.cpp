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
    void inorder(TreeNode* root,vector<TreeNode*>& ans){
        if(root==NULL){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root);
        inorder(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL){
            return false;
        }
        vector<TreeNode*> ans;
        inorder(root,ans);
        for(int i=1;i<ans.size();i++){
            if(ans[i]->val<=ans[i-1]->val) return false;
        }
        
        return true;
    }
};
