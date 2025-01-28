class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        List<Boolean> ans=new ArrayList<>();
        int high=0;
        for(int i=0;i<candies.length;i++){
            high=high<candies[i]?candies[i]:high;
        }
        for(int i=0;i<candies.length;i++){
            if(candies[i]+extraCandies>=high){
                ans.add(true);
            }
            else ans.add(false);
        }
        return ans;
    }
}
