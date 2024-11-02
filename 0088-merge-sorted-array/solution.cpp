class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> a;
        for(int i=0;i<m+n;i++){
            if(i>=m){
                a.push_back(nums2[i-m]);

            }
            else{
                a.push_back(nums1[i]);
            }
        }
        nums1.clear();
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        nums1.push_back(a[i]);

        
    }
};
