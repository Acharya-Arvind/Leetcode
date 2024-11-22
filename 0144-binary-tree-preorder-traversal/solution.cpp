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
    void preTraverse(vector<int> &a, TreeNode* root){
        if(!root){
            return;
        }
        a.push_back(root->val);
        preTraverse(a,root->left);
        preTraverse(a,root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        preTraverse(answer,root);
        return answer;
    }
};
