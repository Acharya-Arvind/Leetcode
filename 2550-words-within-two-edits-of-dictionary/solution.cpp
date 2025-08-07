class Tries{
public:
    Tries* arr[26];
    Tries(){
        for(int i=0;i<26;i++) arr[i]=NULL;
    }
};
class Solution {
public:
    void insert(Tries* root,string s){
        Tries* cur=root;
        for(char x:s){
            int ind=x-'a';
            if(!cur->arr[ind]) cur->arr[ind]=new Tries();
            cur=cur->arr[ind];
        }
    }
    bool search(Tries* node, const string& s, int index, int edits) {
        if (edits > 2) return false;
        if (index == s.size()) return true;
        int ind = s[index] - 'a';
        if (node->arr[ind]) {
            if (search(node->arr[ind], s, index + 1, edits)) return true;
        }
        for (int i = 0; i < 26; i++) {
            if (node->arr[i]) {
                if (search(node->arr[i], s, index + 1, edits + 1)) return true;
            }
        }
        return false;
    }
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        Tries* root=new Tries();
        vector<string> ans;
        for(string x:dictionary){
            insert(root,x);
        }
        for(string x:queries){
            if(search(root,x,0,0)) ans.push_back(x);
        }
        return ans;
    }
};
