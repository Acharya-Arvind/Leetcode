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
    int findleft(TreeNode* root){
        if(root->left==NULL) return root->val;
        return findleft(root->left);
    }
    int findright(TreeNode* root){
        if(root->right==NULL) return root->val;
        return findright(root->right);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key){
            if(root->left==NULL && root->right==NULL){
                return NULL;
            }
            else if(root->right){
                int val=findleft(root->right);
                root->val=val;
                root->right=deleteNode(root->right,val);
            }
            else{
                int val=findright(root->left);
                root->val=val;
                root->left=deleteNode(root->left,val);
            }
        }
        if(root->left) root->left=deleteNode(root->left,key);
        if(root->right) root->right=deleteNode(root->right,key);
        return root;
    }
};
