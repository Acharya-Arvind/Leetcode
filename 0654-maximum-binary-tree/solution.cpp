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
    TreeNode* construct(vector<int>& nums,int start,int end){
        if(start>end) return NULL;
        int ind=-1;
        int val=-1;
        for(int i=start;i<=end;i++){
            if(nums[i]>val){
                val=nums[i];
                ind=i;
            }
        }
        TreeNode* root=new TreeNode(val);
        root->left=construct(nums,start,ind-1);
        root->right=construct(nums,ind+1,end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums,0,nums.size()-1);
    }
};
