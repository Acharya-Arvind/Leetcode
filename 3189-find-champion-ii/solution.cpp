class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> indegree(n);
        for(int i=0;i<edges.size();i++){
            indegree[edges[i][1]]++;
        }
        int ans=0,count=0;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                ans=i;
                count++;
            }
        }
        return count==1?ans:-1;
    }
};
