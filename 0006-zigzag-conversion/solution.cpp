class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        vector<string> v(n,"");
        int i=0;
        int ind=0;
        int len=s.length();
        char flag;
        while(i<len){
            if(ind==0) flag='f';
            else if(ind==n-1) flag='r';
            if(flag=='f'){
                v[ind]+=s[i];
                ind++;
            }
            else{
                v[ind]+=s[i];
                ind--;
            }
            i++;
        }
        string ans;
        for(int i=0;i<n;i++){
            ans+=v[i];
        }
        return ans;
    }
};
