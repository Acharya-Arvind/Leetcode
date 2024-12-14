class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<char> chr1;
        vector<char> chr2;
        for(int i=0;i<s.length();i++){
            chr1.push_back(s[i]);
            chr2.push_back(t[i]);
        }
        sort(chr1.begin(),chr1.end());
        sort(chr2.begin(),chr2.end());
        for(int i=0;i<chr1.size();i++){
            if(chr1[i]!=chr2[i]) return false;
        }
        return true;
    }
};
