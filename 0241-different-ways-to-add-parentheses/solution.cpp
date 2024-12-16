class Solution {
public:
    vector<int> backtrack(string s){
        vector<int> ans;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+' || s[i]=='-' || s[i]=='*'){
                vector<int> left=backtrack(s.substr(0,i));
                vector<int> right=backtrack(s.substr(i+1));
                for(int x:left){
                    for(int y:right){
                        if(s[i]=='+'){
                            ans.push_back(x+y);
                        }
                        if(s[i]=='-'){
                            ans.push_back(x-y);
                        }
                        if(s[i]=='*'){
                            ans.push_back(x*y);
                        }
                    }
                }
            }
        }
        if(ans.empty()){
            ans.push_back(stoi(s));
        }
        return ans;
    }
    vector<int> diffWaysToCompute(string expression) {
        return backtrack(expression);
    }

};
