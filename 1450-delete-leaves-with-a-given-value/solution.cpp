class Solution {
public:
    TreeNode* solve(TreeNode* root, int target) {
        if (root == nullptr) return nullptr;
        root->left = solve(root->left, target);
        root->right = solve(root->right, target);
        if (root->left == nullptr && root->right == nullptr && root->val == target) {
            return nullptr;
        }
        return root;
    }
    
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return solve(root,target);
    }
};

