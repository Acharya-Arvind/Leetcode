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
    unordered_map<int,int> mp;
    int maxi=0;
    int sum(TreeNode* root){
        if(root==NULL) return 0;
        return root->val+sum(root->left)+sum(root->right);
    }
    void logic(TreeNode* root){
        if(root==NULL) return;
        logic(root->left);
        int res=sum(root);
        mp[res]++;
        maxi=max(maxi,mp[res]);
        logic(root->right);
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        logic(root);
        vector<int> ans;
        for(auto x:mp){
            if(x.second==maxi) ans.push_back(x.first);
        }
        return ans;
    }
};
