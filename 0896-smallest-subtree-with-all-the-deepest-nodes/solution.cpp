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
    int height(TreeNode* root){
      if(root==NULL) return 0;
      int left=height(root->left);
      int right=height(root->right);
      return 1+(left<right?right:left);
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        int left=height(root->left);
        int right=height(root->right);
        if(left==right) return root;
        return left<right?subtreeWithAllDeepest(root->right):subtreeWithAllDeepest(root->left);
    }
};
