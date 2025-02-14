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
    unordered_map<Node*,Node*> mp;
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        if(mp[node]) return mp[node];
        Node* newnode=new Node(node->val);
        mp[node]=newnode;
        for(auto i:node->neighbors){
            newnode->neighbors.push_back(cloneGraph(i));
        }
        return newnode;
    }
};
