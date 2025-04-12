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
    int ind=0;
    TreeNode* recoverFromPreorder(string t,int depth=0) {
      if(ind>=t.length()) return NULL;
        int len=0;
        while(t[ind]=='-'){
          ind++;
          len++;
        }
        int val=0;
        if(len<depth){
          ind-=len;
          return NULL;
        }
        while(ind<t.length() && t[ind]!='-'){
          val=val*10+t[ind]-'0';
          ind++;
        }
        TreeNode* root=new TreeNode(val);
        root->left=recoverFromPreorder(t,depth+1);
        root->right=recoverFromPreorder(t,depth+1);
        return root;
    }
};
