class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> arr;
        int ans=0;
        int d=0;
        for(int i=0;i<bank.size();i++){
            int c=0;
            for(int j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1') c++;
            }
            if(c){
            ans=ans+(c*d);
            d=c;
            c=0;
            }
        }
        return ans;
    }
};
