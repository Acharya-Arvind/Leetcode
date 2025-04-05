class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        vector<vector<int>> v;
        vector<int> res;
        v.push_back(res);
        int n=nums.size();
        for(int i=0;i<n;i++){
            int n2=v.size();
            for(int j=0;j<n2;j++){
                res=v[j];
                res.push_back(nums[i]);
                v.push_back(res);
            }
        }
        for(int j=1;j<v.size();j++){
            int size=v[j].size();
            int sum=0;
            for(int i=0;i<size;i++){
                sum^=v[j][i];
            }
            ans+=sum;
        }
        return ans;
    }
};
