/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* vis[101];
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        if(vis[node->val]) return vis[node->val];
        Node* root=new Node(node->val);
        vis[node->val]=root;
        for(Node* x:node->neighbors){
            root->neighbors.push_back(cloneGraph(x));
            
        }
        return root; 
    }
};
