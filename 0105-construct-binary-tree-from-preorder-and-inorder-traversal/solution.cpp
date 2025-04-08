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
    int pre_ind=0;
    TreeNode* logic(vector<int>& preorder,int start,int end){
        if(start>end) return NULL;
        int data=preorder[pre_ind++];
        TreeNode* node=new TreeNode(data);
        int mid=mp[data];
        node->left=logic(preorder,start,mid-1);
        node->right=logic(preorder,mid+1,end);
        return node;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return logic(preorder,0,inorder.size()-1);
    }
};
