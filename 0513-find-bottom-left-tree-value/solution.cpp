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
    void backtrack(TreeNode* root,int& ans,int& minlevel,int maxlevel,bool lf){
        if(!root) return;
        if(!root->left && !root->right && lf){
            cout<<minlevel<<" "<<maxlevel;

            if(minlevel<maxlevel){
                ans=root->val;
                minlevel=maxlevel;
            }
            cout<<ans<<endl;
        }
        backtrack(root->left,ans,minlevel,maxlevel+1,true);
        if(!root->left) backtrack(root->right,ans,minlevel,maxlevel+1,true);
        else backtrack(root->right,ans,minlevel,maxlevel+1,false);
    }
    int findBottomLeftValue(TreeNode* root) {
        if(!root->left && !root->right) return root->val;
        int ans=0;
        int m=0;
        backtrack(root,ans,m,0,true);
        return ans;
    }
};
