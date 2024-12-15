class Solution {
public:
    bool palin(string str,int i,int j){
        while(i<=j){
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    void backtrack(vector<vector<string>>& ans,vector<string> res,int ind,string s){
        if(ind==s.length()){
            ans.push_back(res);
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(!palin(s,ind,i)) continue;
            res.push_back(s.substr(ind,i-ind+1));
            backtrack(ans,res,i+1,s);
            res.pop_back();

        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        backtrack(ans,{},0,s);
        return ans;
    }
};
