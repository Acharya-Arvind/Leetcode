class Tries{
public:
  	vector<Tries*> child;
    bool end=false;
    Tries(){
      child.resize(26,NULL);
    }
    void insert(Tries* root,string& word){
      Tries* cur=root;
      for(char x:word){
        int ind=x-'a';
        if(!cur->child[ind]){
          cur->child[ind]=new Tries();
        }
        cur=cur->child[ind];
      }
      cur->end=true;
    }
    bool search(Tries* root,string& word){
      Tries* cur=root;
      for(char x:word){
        int ind=x-'a';
        if(!cur->child[ind]){
          return false;
        }
        cur=cur->child[ind];
      }
      return cur->end;
    }
};
class Solution {
public:
    unordered_map<string,bool> dp;
    bool solve(Tries* root,string s){
      int n=s.length();
      if(n==0) return true;
      if(dp.find(s)!=dp.end()) return dp[s];
      for(int i=0;i<n;i++){
        string prefix=s.substr(0,i+1);
        string suffix=s.substr(i+1);
          if(root->search(root,prefix)){
            if(solve(root,suffix)){
            return dp[s]=true;
            }
          }
        }
      return dp[s]=false;

    }
    bool wordBreak(string s, vector<string>& wordDict) {
      Tries* root=new Tries();
        for(auto x:wordDict){
          root->insert(root,x);
        }
        return solve(root,s);
    }
};
