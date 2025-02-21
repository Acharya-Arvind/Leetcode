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
class FindElements {
public:
TreeNode* head=NULL;
    FindElements(TreeNode* root) {
        head=root;
        root->val=0;
        modify(root->left,root,true);
        modify(root->right,root,false);
    }
    void modify(TreeNode* root,TreeNode* prev,bool flag){
        if(!root) return;
        if(flag){
             root->val=2*prev->val+1;
        }
        else{
            root->val=2*prev->val+2;
        }
        prev=root;
        modify(root->left,prev,true);
        modify(root->right,prev,false);
    }
    bool find(int target) {
        return traverse(head,target);
    }
    bool traverse(TreeNode* root,int target){
        if(!root) return false;
        if(root->val==target) return true;
        return traverse(root->left,target) || traverse(root->right,target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
