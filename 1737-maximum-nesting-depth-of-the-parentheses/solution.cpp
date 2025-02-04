class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int bal=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                bal++;
                ans=max(ans,bal);
            }
            else if(s[i]==')'){
                bal--;
            }
        }
        return ans;
    }
};
