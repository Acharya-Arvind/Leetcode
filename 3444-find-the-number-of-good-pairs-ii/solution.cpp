class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_map<int,int> mp;
        long long c=0;
        for(int x:nums2) mp[x*k]++;
        for(int n:nums1){
            int num=sqrt(n);
            for(int i=1;i<=num;i++){
                if(n%i==0){
                    c+=mp[i];
                    if(i!=n/i) c+=mp[n/i];
                }
            }
        }
        return c;
    }
};
