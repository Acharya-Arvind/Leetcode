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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()!=0){
            vector<int> sub;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                sub.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            long long sum=0;
            for(int i=0;i<sub.size();i++){
                sum+=sub[i];
            }
            ans.push_back((double)sum/sub.size());
        }
        return ans;
    }
};
