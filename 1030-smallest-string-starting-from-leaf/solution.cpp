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
    void backtrack(TreeNode* root,string& s,string & ans){
        if(!root) return;
        s=(char)('a'+root->val)+s;
        if(!root->left && !root->right){
            if(ans=="" || s<ans){
                ans=s;
            }
        }
        backtrack(root->left,s,ans);
        backtrack(root->right,s,ans);
        s.erase(0,1);
    }
    string smallestFromLeaf(TreeNode* root) {
        string ans="";
        string s="";
        backtrack(root,s,ans);
        return ans;
    }
};
