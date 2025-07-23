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
    pair<bool,int> help(TreeNode* root,int start){
        if(root==NULL) return {false,0};
        pair<bool,int> left=help(root->left,start);
        pair<bool,int> right=help(root->right,start); 
        if(root->val==start){
            ans=max(ans,max(left.second,right.second));
            return {true,0};
        }
        if(left.first){
            ans=max(ans,left.second+right.second+1);
            return {true,left.second+1};
        }
        else if(right.first){
            ans=max(ans,left.second+right.second+1);
            return {true,right.second+1};
        }
        return {false,max(left.second,right.second)+1};
    }
    int amountOfTime(TreeNode* root, int start) {
        help(root,start);
        return ans;
    }
};
