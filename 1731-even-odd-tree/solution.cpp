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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ind=1;
        while(q.size()!=0){
            vector<int> ans;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                ans.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(ind%2==0){
                if(ans.size()==1 && ans[0]%2!=0) return false;
                for(int i=1;i<ans.size();i++){
                    if(ans[i-1]<=ans[i] || ans[i]%2!=0 || ans[i-1]%2!=0) return false;
                } 
            }
            else{
                if(ans.size()==1 && ans[0]%2==0) return false;
                for(int i=1;i<ans.size();i++){
                    if(ans[i-1]>=ans[i] || ans[i]%2==0 || ans[i-1]%2==0) return false;
                }                
            }
            ind++;
        }
        return true;
    }
};
