class Tries{
public:
    Tries* arr[26];
    Tries(){
        for(int i=0;i<26;i++) arr[i]=NULL;
    }
};
class Solution {
public:
    void add(Tries* root,string s){
        Tries* cur=root;
        for(char x:s){
            int ind=x-'a';
            if(!cur->arr[ind]) cur->arr[ind]=new Tries();
            cur=cur->arr[ind];
        }
    }
    int search(string& target,int index,Tries* root,vector<int>& dp){
        if(index>=target.length()) return 0;
        if(dp[index]!=-1) return dp[index];
        int ans=INT_MAX;
        Tries* cur=root;
        for(int i=index;i<target.length();i++){
            int ind=target[i]-'a';
            if(!cur->arr[ind]) break;
            cur=cur->arr[ind];
            int res=search(target,i+1,root,dp);
            if(res!=INT_MAX){
                ans=min(ans,res+1);
            }
        }
        return dp[index]=ans;
    }
    int minValidStrings(vector<string>& words, string target) {
        Tries* root=new Tries();
        for(string x:words) add(root,x);
        vector<int> dp(target.size(),-1);
        int ans=search(target,0,root,dp);
        return ans==INT_MAX?-1:ans;
        
    }
};
