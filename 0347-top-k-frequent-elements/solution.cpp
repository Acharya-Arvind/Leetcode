class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        vector<int> ans;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(maxi<m[nums[i]]) maxi=m[nums[i]];
        }
        for(int i=maxi;i>=0;i--){
            for(auto& x:m){
                if(ans.size()==k) return ans;
                if(x.second==i) ans.push_back(x.first);
            }
        }
        return ans;
    }
};
