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
    unordered_map<TreeNode*,int> mp;
    int rob(TreeNode* root) {
    if(root==NULL) return 0;
    if(mp.find(root)!=mp.end()) return mp[root];
    int NP=rob(root->left)+rob(root->right);
    int P=root->val;
    if(root->left) P+=rob(root->left->left)+rob(root->left->right);
    if(root->right) P+=rob(root->right->left)+rob(root->right->right);
    return mp[root]=max(P,NP);
    }
};
