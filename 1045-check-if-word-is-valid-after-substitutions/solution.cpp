class Solution {
public:
    bool isValid(string s) {
        int loop=1;
        while(loop){
            int ind=s.find("abc");
            if(ind==-1) break;
            s.replace(ind,3,"");
        }
        return s=="";
    }
};
