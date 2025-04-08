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
    long long total=0;
    long long result;
    int total_sum(TreeNode* root){
        if(root==NULL) return 0;
        return root->val+total_sum(root->left)+total_sum(root->right);
    }
    int subtree(TreeNode* root){
        if(root==NULL) return 0;
        int left=subtree(root->left);
        int right=subtree(root->right);
        int sum=left+right+root->val;
        result=max(result,(total-sum)*(sum));
        return sum;
    }

    int maxProduct(TreeNode* root) {
        total=total_sum(root);
        int ans=subtree(root);
        return result%(1000000007);
    }
};
