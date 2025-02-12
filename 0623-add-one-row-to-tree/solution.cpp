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
    TreeNode* add(TreeNode* root,int val,int cur,int dep){
        if(!root) return NULL;
        if(cur==dep){
            TreeNode* l=root->left;
            TreeNode* r=root->right;
            TreeNode* n1=new TreeNode(val);
            TreeNode* n2=new TreeNode(val);
            n1->left=l;
            n2->right=r;
            root->left=n1;
            root->right=n2;
            return root;
        }
        add(root->left,val,cur+1,dep);
        add(root->right,val,cur+1,dep);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* t=new TreeNode(val);
            t->left=root;
            return t;
        }
        return add(root,val,2,depth);
    }
};
