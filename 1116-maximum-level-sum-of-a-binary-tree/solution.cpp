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
    int maxLevelSum(TreeNode* root) {
        int lv=0;
        int ans=INT_MIN;
        int cl=0;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()!=0){
            lv++;
            int sum=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                sum+=t->val;
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(ans<sum){
                cl=lv;
                ans=sum;
            }
        }
        return cl;
    }
};
