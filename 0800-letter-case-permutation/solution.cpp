class Solution {
public:
    void backtrack(vector<string>& ans,string s,int ind,int n){
        if(ind>n) return;
        ans.push_back(s);
        for(int i=ind;i<n;i++){
            if(s[i]>='0' && s[i]<='9') continue;
            char ch=s[i];
            char swi;
            if(ch>='a' && ch<='z'){
                swi=ch-' ';
            }
            else{
                swi=ch+' ';
            }
            s[i]=swi;
            backtrack(ans,s,i+1,n);
            s[i]=ch;
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        backtrack(ans,s,0,s.length());
        return ans;
    }
};
