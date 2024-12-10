class Solution {
public:

    void backtracks(string digits,map<char,string> letter,vector<string>& res,int i,string s){

        if(s.length()==digits.length()){
            res.push_back(s);
            
            return;
        }
        
        string value=letter[digits[i]];
        for(int j=0;j<value.length();j++){
            backtracks(digits,letter,res,i+1,s+value[j]);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        map<char, string> letter = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        string s="";
        if(digits.length()==0) return res;
        backtracks(digits,letter,res,0,s);
        return res;

    }
};
