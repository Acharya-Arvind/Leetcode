class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long> ans;
        for(int i=0;i<n;i++){
          ans.push_back(nums[i]);
          for(int j=i+1;j<n;j++){
            ans.push_back(ans.back()+nums[j]);
          }
        }
        sort(ans.begin(),ans.end());
        vector<long long> p_s;
         p_s.push_back(ans[0]);
          for(int i=1;i<=ans.size();i++){
            p_s.push_back(p_s.back()+ans[i]);
          }
        if(left==1) return (int)(p_s[right-1]%1000000007);
        return (int)((p_s[right-1]-p_s[left-2])%1000000007);
    }
};

