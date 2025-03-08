class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans=INT_MAX;
        int n=blocks.size();
        int c=0;
        int ind=0;
        while(ind<=blocks.size()-k){
            int c=0;
        for(int i=ind;i<k+ind;i++){
            if(blocks[i]=='W'){
                c++;
            }
        }
        ans=min(c,ans);
        ind++;
        }
        return ans;
    }
};
