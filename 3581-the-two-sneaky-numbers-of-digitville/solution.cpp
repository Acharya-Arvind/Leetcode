class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
    vector<int> n;
       int a[101]={0};
       for(int i=0;i<nums.size();i++){
        a[nums[i]]++;
       } 
       for(int i=0;i<101;i++){
        if(a[i]==2){
            n.push_back(i);
        }
       }
       return n;

    }
};
