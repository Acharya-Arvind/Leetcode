class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        if(n==0 || s[0]=='0') return 0;
        vector<int> ans(n+1,0);
        ans[0]=1;
        ans[1]=1;
        for(int i=2;i<=n;i++){
            if((s[i-1]-'0')>0) ans[i]+=ans[i-1];
            int temp=stoi(s.substr(i-2,2));
            if(temp>9 && temp<27) ans[i]+=ans[i-2];
        }
        return ans[n];
    }
};
