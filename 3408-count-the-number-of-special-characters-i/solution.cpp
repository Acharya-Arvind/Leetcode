class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        set<char> a(word.begin(),word.end());
        map<char,int> m;
        for(char c:a){
            c=tolower(c);
            m[c]++;
        }
        int res=0;
        for(char c:a){
            if(m[c]==2) res++;
        }
        return res;
    }
};
