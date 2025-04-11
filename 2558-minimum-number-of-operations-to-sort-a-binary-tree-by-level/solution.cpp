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
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int c=0;
        while(!q.empty()){
          int size=q.size();
          vector<int> ans;
          for(int i=0;i<size;i++){
            TreeNode* t=q.front();
            q.pop();
            ans.push_back(t->val);
            if(t->left)q.push(t->left);
            if(t->right)q.push(t->right);
          }
          int n=ans.size();
          for(int i=0;i<n;i++){
            int ind=i;
            for(int j=i+1;j<n;j++){
              if(ans[ind]>ans[j]) ind=j;
            }
                swap(ans[i],ans[ind]);
                if(ind!=i) c++;
              }
          }
        return c;
    }
};
