class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            int sum=(nums[i][0]*nums[i][0])+(nums[i][1]*nums[i][1]);
            q.push({sum,i});
        }
        while(k--){
            ans.push_back(nums[q.top().second]);
            q.pop();
        }
        return ans;
    }
};
