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
    int ind; 
    TreeNode* build(int start,int end,vector<int>& postorder){
        if(start>end) return NULL;
        int val=postorder[ind--];
        TreeNode* root=new TreeNode(val);
        int mid=mp[val];
        root->right=build(mid+1,end,postorder);
        root->left=build(start,mid-1,postorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        ind=postorder.size()-1;
        int n=postorder.size();
        for(int i=0;i<inorder.size();i++) mp[inorder[i]]=i;
        return build(0,ind,postorder);
    }
};
