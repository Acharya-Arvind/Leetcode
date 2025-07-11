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
    unordered_map<int,int> mp;
    void sumlevel(TreeNode* root,int level){
        if(root==NULL) return;
        mp[level]+=root->val;
        sumlevel(root->left,level+1);
        sumlevel(root->right,level+1); 
    }
    void reconstruct(TreeNode* root,int level){
        int sum=0;
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) return;
        else if(root->left==NULL){
            sum=root->right->val;
            root->right->val=mp[level+1]-sum;
        }
        else if(root->right==NULL){
            sum=root->left->val;
            root->left->val=mp[level+1]-sum;
        }
        else{
            sum=root->left->val+root->right->val;
            root->left->val=mp[level+1]-sum;
            root->right->val=mp[level+1]-sum;
        }
        reconstruct(root->left,level+1);
        reconstruct(root->right,level+1); 
    }
    TreeNode* replaceValueInTree(TreeNode* root) {
        sumlevel(root,0);
        root->val=0;
        reconstruct(root,0);
        return root;
    }
};
