class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long,vector<long>,greater<long>> pq;
        int ans=0;
        for(int i=0;i<nums.size();i++) pq.push(nums[i]);
        while(pq.top()<k){
            long a=pq.top();
            pq.pop();
            long b=pq.top();
            pq.pop();
            pq.push((a*2)+b);
            ans++;
        }
        return ans;
    }
};
