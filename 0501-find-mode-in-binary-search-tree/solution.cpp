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
    void traverse(TreeNode* root,unordered_map<int,int>& mp,int& n){
        if(!root) return;
        traverse(root->left,mp,n);
        mp[root->val]++;
        if(mp[root->val]>n){
            n=mp[root->val];
        }
        traverse(root->right,mp,n);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int n=0;
        unordered_map<int,int> mp;
        traverse(root,mp,n); 
        for(auto x:mp){
            if(x.second==n){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
