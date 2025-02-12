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
    void inorder(TreeNode* root,vector<int>& val){
        if(!root) return;
        inorder(root->left,val);
        val.push_back(root->val);
        inorder(root->right,val);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> val;
        inorder(root,val);
        int i=0,j=val.size()-1;
        while(i<j){
            if(val[i]+val[j]==k) return true;
            if(val[i]+val[j]>k) j--;
            else i++;
        }
        return false;
    }
};
