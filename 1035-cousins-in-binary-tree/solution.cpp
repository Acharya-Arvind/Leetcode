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
  int par_x,par_y,dep_x,dep_y;
  	void logic(TreeNode* root,int x,int y,int depth,int parent){
      if(root==NULL) return;
      if(root->val==x){
        par_x=parent;
        dep_x=depth;
      }
      if(root->val==y){
        par_y=parent;
        dep_y=depth;
      }
      logic(root->left,x,y,depth+1,root->val);
      logic(root->right,x,y,depth+1,root->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
      if(root->val==x || root->val==y) return false;
        logic(root,x,y,0,root->val);
        if(dep_x==dep_y && par_x!=par_y) return true;
        return false;
    }
};
