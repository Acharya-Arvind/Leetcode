class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string s="a";
        int i=0;
        while(s!=target){
            ans.push_back(s);
            if(s[i]==target[i]){
                s+='a';
                i++;
            }
            else{
                s[i]=s[i]+1;
            }
        }
        ans.push_back(s);
        return ans;
    }
};
