class Solution {
    public int maxFrequencyElements(int[] nums) {
        HashMap<Integer,Integer> mp=new HashMap<>();
        int maxi=1;
        int ans=0;
        for(int i=0;i<nums.length;i++){
            if(mp.containsKey(nums[i])){
                mp.put(nums[i],mp.get(nums[i])+1);
                maxi=Math.max(maxi,mp.get(nums[i]));
            }
            else{
                mp.put(nums[i],1);
            }
        }
        for(int x:mp.keySet()){
            if(mp.get(x)==maxi) ans+=maxi;
        }
        return ans;
    }
}
