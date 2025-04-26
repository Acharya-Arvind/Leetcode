class Solution {
public:
    bool check(string s){
        vector<int> ch(26,0);
        for(int i=0;i<s.length();i++){
            if(++ch[s[i]-'a']>1) return true;
        }
        return false;
    }
    void backtrack(int& ans,vector<string>& arr,int i,string s){
        if(check(s)){
            return ;
        }
        ans=max(ans,(int)s.length());
        for(int ind=i;ind<arr.size();ind++){
            backtrack(ans,arr,ind+1,s+arr[ind]);
        }
    }
    int maxLength(vector<string>& arr) {
        int ans=0;
        backtrack(ans,arr,0,"");
        return ans;
    }
};
