class Solution {
public:

    bool palin(int i,string &s){
        int n=s.length();
        if(i>=n/2) return true;

        if(s[i]!=s[n-i-1]) return false;
        return palin(i+1,s);

    }

    bool isPalindrome(string s) {
        
        string ans;
        for(char c:s){
            if(isalnum(c))
            ans+=tolower(c);
        }
        return palin(0,ans);
        

    }
};
