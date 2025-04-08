/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<Node*> v;
            for(int i=0;i<size;i++){
                Node* t=q.front();
                q.pop();
                v.push_back(t);
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
            }
            if(v.size()>1)
            for(int i=1;i<v.size();i++){
                cout<<v[i-1]->val<<" ";
                v[i-1]->next=v[i];
            }
            cout<<endl;
        }
        return root;
    }
};
