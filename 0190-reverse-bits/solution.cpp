class Solution {
public:
    int reverseBits(int n) {
        string s;
        while(n!=0){
            s=((char)('0'+n%2)+s);
            n/=2;
        }
        while(s.length()<32) s='0'+s;
        int ans=0;
        long pro=1;
        for(int i=0;i<32;i++){
            ans+=((s[i]-'0')*pro);
            pro*=2;
        }
        return ans;
    }
};
