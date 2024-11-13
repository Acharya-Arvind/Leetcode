class Solution {
public:
    string add(int start,int end){
        if(start==end) return to_string(start);
        return to_string(start)+"->"+to_string(end);
        

    }
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string> res;
        if(n==0) return res;
        int start=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]+1){
                res.push_back(add(start,nums[i-1]));
                start=nums[i];
            }
            
        }
        res.push_back(add(start,nums[n-1]));
        return res;
        
    }
};
