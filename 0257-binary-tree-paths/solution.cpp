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
    void backtrack(TreeNode* root,vector<string>& ans,vector<int>& v){
        if(!root){
            return;
        }
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            string s;
            int i;
            for(i=0;i<v.size()-1;i++){
                s=s+to_string(v[i])+"->";
            }
            s+=to_string(v[i]);
            ans.push_back(s);
        }
        backtrack(root->left,ans,v);
        backtrack(root->right,ans,v);
        v.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        vector<int> v;
        string s;
        backtrack(root,ans,v);
        return ans;
    }
};
