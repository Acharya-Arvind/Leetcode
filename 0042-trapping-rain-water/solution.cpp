class Solution {
public:
    int trap(vector<int>& num) {
        int ans=0;
        int n=num.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        left[0]=num[0];
        right[n-1]=num[n-1];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],num[i]);
            right[n-i-1]=max(right[n-i],num[n-i-1]);
        }
        for(int i=0;i<n;i++){
            ans+=(min(left[i],right[i])-num[i]);
        }
        return ans;
    }
};
