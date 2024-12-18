class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> ms,mt;
        for(int i=0;i<s.length();i++){
            if(ms.count(s[i]) && ms[s[i]]!=t[i]) return false;
            if(mt.count(t[i]) && mt[t[i]]!=s[i]) return false;
            ms[s[i]]=t[i];
            mt[t[i]]=s[i];
        }
        return true;
    }
};
