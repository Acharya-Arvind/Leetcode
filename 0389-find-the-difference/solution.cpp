class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=t[0];
        for(int i=1;i<t.length();i++){
            ans=ans^t[i];
        }
        for(int j=0;j<s.length();j++){
            ans=ans^s[j];
        }
        return ans;
    }
};
