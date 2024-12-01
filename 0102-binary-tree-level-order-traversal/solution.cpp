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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) return result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> v;
            int count=q.size();
            for(int i=0;i<count;i++){
                TreeNode* c=q.front();
                q.pop();
                v.push_back(c->val);
                if(c->left) q.push(c->left);
                if(c->right) q.push(c->right);

            }
            result.push_back(v);
        }
        return result;
    }
};
