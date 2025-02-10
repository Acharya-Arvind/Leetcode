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
    void preorder(TreeNode* root,vector<int>& ans){
        if(!root) return;
        preorder(root->left,ans);
        ans.push_back(root->val);
        preorder(root->right,ans);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);
        root->val=ans[0];
        root->left=NULL;
        TreeNode* temp=root;
        for(int i=1;i<ans.size();i++){
            temp->right=new TreeNode(ans[i]);
            temp=temp->right;
            temp->left=NULL;
        }
        return root;

    }
};
