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
   
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans;
        if(n%2==0) return ans;
        if(n==1) return {new TreeNode(0)};
        for(int i=1;i<n;i+=2){
            vector<TreeNode*> l=allPossibleFBT(i);
            vector<TreeNode*> r=allPossibleFBT(n-i-1);

            for(TreeNode* x:l){
                for(TreeNode* y:r){
                    TreeNode* root=new TreeNode(0);
                    root->left=x;
                    root->right=y;
                    ans.push_back(root);
                }
            }
        }
        
        return ans;
    }
};
