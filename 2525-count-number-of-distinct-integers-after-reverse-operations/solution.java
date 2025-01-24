class Solution {
    public int countDistinctIntegers(int[] nums) {
        int c=0;
        HashMap<Integer,Integer> mp=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            mp.put(nums[i],0);
        }
        for(int i=0;i<nums.length;i++){
            int n=nums[i];
            int rn=0;
            while(n>0){
                rn=(rn*10)+n%10;
                n/=10;
            }
            mp.put(rn,mp.get(nums[i])+1);
        }
        
        return mp.size();
    }
}
