class Solution {
public:

    void backtrack(int open,int close,vector<string>& ans,string s){
        if(open==0 && close==0){
            
            ans.push_back(s);
            
            return;
        }
        if(open>0){
            backtrack(open-1,close,ans,s+"(");
        }
        if(open<close){
            backtrack(open,close-1,ans,s+")");
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        if(n==0) return ans;
        backtrack(n,n,ans,"");
        return ans;
    }
};
