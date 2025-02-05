class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        string ss1=s1,ss2=s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1!=s2) return false;
        int c=0;
        for(int i=0;i<s1.length();i++){
            if(ss1[i]!=ss2[i]) c++;
        }
        return c==2;
    }
};
