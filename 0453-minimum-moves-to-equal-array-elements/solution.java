class Solution {
    public int minMoves(int[] nums) {
        int c=0;
        int mini=Integer.MAX_VALUE;
        for(int x:nums) mini=Math.min(mini,x);
        for(int x:nums) c+=x-mini;
        return c;
    }
}
