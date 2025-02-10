class Solution {
public:
    string clearDigits(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){
                s.erase(i-1,2);
                i-=2;
                cout<<s<<" ";
            }
        }
        return s;
    }
};
