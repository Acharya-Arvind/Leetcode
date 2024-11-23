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
    void levelOrderTraversal(vector<vector<int>> &answer,TreeNode* root){
        if(!root){
            return;
        }
        queue<TreeNode*> q ; 
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> v;
            for(int i=0;i<size;i++){
                TreeNode* current = q.front();
                if(current->left){
                    q.push(current->left);
                }
                if(current->right){
                    q.push(current->right);  
                }
                v.push_back(current->val);
                q.pop();
            }
            answer.push_back(v);
        }
        reverse(answer.begin(),answer.end());
        
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> answer;
        levelOrderTraversal(answer, root);
        return answer;
    }
};
