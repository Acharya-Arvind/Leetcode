class Solution {
public:
    void dfs(vector<vector<int>>& g,vector<bool>& vis,int& count,int i){
        vis[i]=true;
        count++;
        for(int j=0;j<g[i].size();j++){
            if(!vis[g[i][j]]){
                dfs(g,vis,count,g[i][j]);
            }
        }
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size();
        vector<vector<int>> g(n);
        for(int i=0;i<n;i++){
            long long x1,y1,r1;
            x1=bombs[i][0];
            y1=bombs[i][1];
            r1=bombs[i][2];

            for(int j=0;j<n;j++){
                if(i!=j){
                    long long x2,y2;
                    x2=abs(x1-bombs[j][0]);
                    y2=abs(y1-bombs[j][1]);
                    if(sqrt((x2*x2)+(y2*y2))<=r1){
                        g[i].push_back(j);
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int count=0;
            vector<bool> vis(n,false);
            dfs(g,vis,count,i);
            ans=max(ans,count);
        }
        return ans;
    }
};
