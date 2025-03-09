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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool isnull=false;
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            if(!temp) isnull=true;
            else{
                if(isnull) return false;
                else{
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }

        }
        return true;
    }
};
