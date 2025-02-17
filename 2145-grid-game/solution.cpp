class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n=grid[0].size();
        vector<long long> bottom(n+1,0),top(n+1,0);
        for(int i=0;i<n;i++){
            top[i+1]=grid[0][i]+top[i];
            bottom[i+1]=grid[1][i]+bottom[i];
        }
        long long ans=LLONG_MAX;
        for(int i=0;i<n;i++){
            long long t=top[n]-top[i+1];
            long long b=bottom[i];
            ans=min(ans,max(t,b));
        }
        return ans;
    }
};
