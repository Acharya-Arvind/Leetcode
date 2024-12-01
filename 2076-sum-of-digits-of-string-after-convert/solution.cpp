class Solution {
public:
    int getLucky(string s, int k) {
        string a="";
        for(int i=0;i<s.length();i++){
            a+=to_string(s[i]-'a'+1);
        }
        cout<<a<<" ";
        for(int i=0;i<k;i++){
            int c=0;
            for(char v:a){
                c+=v-'1'+1;
            }
            a=to_string(c);
        }
        cout<<a;
        return stoi(a);
    }
};
