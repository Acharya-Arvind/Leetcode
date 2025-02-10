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
    void backtrack(TreeNode* root,string& s,int& ans){
        if(!root) return;
        s+=to_string(root->val);
        if(!root->left && !root->right){
            ans+=stoi(s,0,2);
        }
        backtrack(root->left,s,ans);
        backtrack(root->right,s,ans);
        s.erase(s.size()-1,1);
    }
    int sumRootToLeaf(TreeNode* root) {
        string s="";
        int ans=0;
        backtrack(root,s,ans);
        return ans;
    }
};
