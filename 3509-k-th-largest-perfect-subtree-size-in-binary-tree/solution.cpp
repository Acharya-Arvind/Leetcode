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
    int logic(TreeNode* root,vector<int>& ans){
        if(!root) return 0;
        int l=1+logic(root->left,ans);
        int r=1+logic(root->right,ans);
        if(l==r && l>=1){
            ans.push_back(l+r-1);
            return l+r-1;
        }
        return -1;
    }
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        vector<int> ans;
        logic(root,ans);
        sort(ans.begin(),ans.end(),greater<int>());
        if(ans.size()<k) return -1;        
        return ans[k-1];
    }
};
