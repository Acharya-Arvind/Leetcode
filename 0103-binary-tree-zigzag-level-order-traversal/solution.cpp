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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        char direction = 's';
        while(!q.empty()){
            vector<int> v;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* current = q.front(); 
                v.push_back(current->val);
                q.pop();
                if(current->left){
                    q.push(current->left);
                }
                if(current->right){
                    q.push(current->right);
                }
            }
            if(direction == 'r' ){
                reverse(v.begin(),v.end());
                direction = 's';
            }
            else{
                direction = 'r';
            }
            result.push_back(v);
        }
        return result;
    }
};
