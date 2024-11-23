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

    void getPaths(vector<vector<int>> &ans, vector<int> currentPath, TreeNode* root, int targetSum){
        if(!root){
            return;
        }
        currentPath.push_back(root->val);
        if(!root->left && !root->right){
            if(root->val == targetSum){
                ans.push_back(currentPath);
            }
            return;
        }
        if(root->left){
            getPaths(ans,currentPath,root->left,targetSum-root->val);
        }
        if(root->right){
            getPaths(ans,currentPath,root->right,targetSum-root->val);
        }
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> answer;
        vector<int> currentPath;
        getPaths(answer,currentPath,root,targetSum);
        return answer;
    }
};
