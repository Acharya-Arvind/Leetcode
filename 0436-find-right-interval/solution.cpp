class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        
        int n=intervals.size();
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(intervals[i][1]<=intervals[j][0] && (ans[i]==-1 || intervals[ans[i]][0]>=intervals[j][0])){
                    ans[i]=j;
                }
            }
        }
        return ans;
    }
};
