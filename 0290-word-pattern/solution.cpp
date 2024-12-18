class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(ans!=""){
                v.push_back(ans);
                ans="";
                }
            }
            else{
            ans+=s[i];
            }
        }
        v.push_back(ans);
        
        if(pattern.length()!=v.size()) return false;

        unordered_map<char,string> m1;
        unordered_map<string,char> m2;
        for(int i=0;i<pattern.length();i++){
            char ch=pattern[i];
            string word=v[i];
            if(m1.count(ch) && m1[ch]!=word) return false;
            if(m2.count(word) && m2[word]!=ch) return false;
            m1[ch]=word;
            m2[word]=ch;

        }
        return true;
    }
};
