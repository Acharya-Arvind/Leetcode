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
    int sumEvenGrandparent(TreeNode* root) {
      logic(NULL,NULL,root);
      return ans;
    }
    void logic(TreeNode* gp,TreeNode* p,TreeNode* root){
      if(root==NULL) return;
      if(gp){
        if(gp->val%2==0) ans+=root->val;
      }
      logic(p,root,root->left);
      logic(p,root,root->right);
    }
};
