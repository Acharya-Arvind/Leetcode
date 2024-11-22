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
    void postorder(vector<int> &a, TreeNode* root){
        if(!root){
            return;
        }
        postorder(a,root->left);
        postorder(a,root->right);
        a.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> answer;
        postorder(answer,root);
        return answer;
    }
};
