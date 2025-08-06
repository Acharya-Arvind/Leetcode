class Trie{
public:
    Trie* arr[26];
    int count=0;
    Trie(){
        for(int i=0;i<26;i++) arr[i]=NULL;
    }
};
class Solution {
public:
    void add(Trie* root,string word){
        Trie* cur=root;
        for(char x:word){
            int ind=x-'a';
            if(!cur->arr[ind]) cur->arr[ind]=new Trie;
            cur=cur->arr[ind];
            cur->count++;
        }
        
    }
    int search(Trie* root,string word){
         Trie* cur=root;
         int count=0;
        for(char x:word){
            int ind=x-'a';
            cur=cur->arr[ind];
            count+=cur->count;
        }
        return count;
    }
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie* root=new Trie();
        for(string x:words){
            add(root,x);
        }
        vector<int> ans;
        for(string x:words){
            ans.push_back(search(root,x));
        }
        return ans;
    }
};
