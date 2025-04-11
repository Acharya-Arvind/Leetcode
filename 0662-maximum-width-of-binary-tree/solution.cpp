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
    int widthOfBinaryTree(TreeNode* root) {
        long long ans=0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        while(!q.empty()){
          long long size=q.size();
          long long s=q.front().second;
          long long e=q.back().second;
          ans=max(ans,e-s+1);
          while(size--){
            TreeNode* t=q.front().first;
            int ind=q.front().second;
            q.pop();
            if(t->left) q.push({t->left,(long long)2*ind+1});
            if(t->right) q.push({t->right,(long long)2*ind+2});
          }
        }
        return (int)ans;
    }
};
