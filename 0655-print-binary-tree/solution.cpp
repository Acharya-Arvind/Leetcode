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
        return 1+max(left,right);
    }
    void logic(TreeNode* root,vector<vector<string>>& ans,int i,int j,int ind){
        if(root==NULL) return;
        int mid=(i+j)/2;
        ans[ind][mid]=to_string(root->val);
        logic(root->left,ans,i,mid-1,ind+1);
        logic(root->right,ans,mid+1,j,ind+1);
    }
    vector<vector<string>> printTree(TreeNode* root) {
        int m=height(root);
        int n=pow(2,m)-1;
        vector<vector<string>> ans(m,vector<string>(n,""));
        logic(root,ans,0,n-1,0);
        return ans;
    }
};
