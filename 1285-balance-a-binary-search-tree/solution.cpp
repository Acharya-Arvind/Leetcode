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
    void Inorder(TreeNode* root,vector<int>& ans){
        if(!root) return;
        Inorder(root->left,ans);
        ans.push_back(root->val);
        Inorder(root->right,ans);
    }
    TreeNode* build(vector<int>& ans,int s,int e){
        if(s>e) return NULL;
        int mid=(s+e)/2;
        TreeNode* t=new TreeNode(ans[mid]);
        t->left=build(ans,s,mid-1);
        t->right=build(ans,mid+1,e);
        return t;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans;
        Inorder(root,ans);
        return build(ans,0,ans.size()-1);
        
    }
};
