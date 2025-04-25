class Solution {
public:
    void backtrack(vector<string>& ans,unordered_map<char,string>& mp,int ind,string s,string digits){
        if(s.length()==digits.length()){
            ans.push_back(s);
            return;
        }
        string str=mp[digits[ind]];
        for(int i=0;i<str.length();i++){
            backtrack(ans,mp,ind+1,s+str[i],digits);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        unordered_map<char,string> mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string> ans;
        backtrack(ans,mp,0,"",digits);
        return ans;
    }
};
