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
  int ans=0;
    int logic(TreeNode* root,int val){
      if(root==NULL) return 0;
      int left=logic(root->left,root->val);
      int right=logic(root->right,root->val);
      ans=max(left+right,ans);
      if(root->val==val){
        return 1+max(left,right);
      }
      return 0;
    }
    int longestUnivaluePath(TreeNode* root) {
        if(root==NULL) return 0;
        logic(root,root->val);
        return ans;
    }
};
