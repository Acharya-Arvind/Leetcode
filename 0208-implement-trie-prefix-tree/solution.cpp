class Node{
public:
    Node* child[26];
    bool end;
    Node() {
        for(int i=0;i<26;i++){
          child[i]=NULL;
        }
        end=false;
    }
};
class Trie {
public:
    Node* root;
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node* cur=root;
        for(char x:word){
          int ind=x-'a';
          if(!cur->child[ind]){
            cur->child[ind]=new Node();
          }
          cur=cur->child[ind];
        }
        cur->end=true;
    }
    
    bool search(string word) {
        Node* cur=root;
        for(char x:word){
          int ind=x-'a';
          if(!cur->child[ind]){
            return false;
          }
          cur=cur->child[ind];
        }
        return cur->end;
    }
    
    bool startsWith(string prefix) {
         Node* cur=root;
        for(char x:prefix){
          int ind=x-'a';
          if(!cur->child[ind]){
            return false;
          }
          cur=cur->child[ind];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
