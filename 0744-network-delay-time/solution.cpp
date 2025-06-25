typedef pair<int,int> pr;
class Solution {
    
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pr>> adj(n+1);
        for(int i=0;i<times.size();i++){
            int s=times[i][0];
            int d=times[i][1];
            int w=times[i][2];
            adj[s].push_back({d,w});
        }
        priority_queue<pr,vector<pr>,greater<pr>> pq;
        vector<int> dist(n+1,INT_MAX);
        pq.push({k,0});
        while(pq.size()!=0){
            int node=pq.top().first;
            int d=pq.top().second;
            pq.pop();
            if(d<dist[node]){
                dist[node]=d;
                for(auto x:adj[node]){
                    if((d+x.second)>dist[x.first]) continue;
                    pq.push({x.first,d+x.second});
                }
            }
        }
        int ans=*max_element(dist.begin()+1,dist.end());
        return ans==INT_MAX?-1:ans;
    }
};
