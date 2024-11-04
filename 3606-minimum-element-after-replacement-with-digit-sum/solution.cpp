class Solution {
public:
    int minElement(vector<int>& nums) {
        int min=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int tot=0;
            while(n>0){
                tot=tot+n%10;
                n=n/10;
            }
            nums[i]=tot;
        }
        min=nums[0];
        for(int i=1;i<nums.size();i++){
            if(min>nums[i]) min=nums[i];
        }
        return min;
    }
};
