class Solution {
public:
    string toHex(int num) {
        char buf[99999];
        snprintf(buf,size(buf),"%x",num);
        string ans=buf;
        return ans;
    }
};
