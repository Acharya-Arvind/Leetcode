class Solution {
    public int heightChecker(int[] heights) {
        int[] ans=heights.clone();
        int len=0;
        int n=ans.length;
        Arrays.sort(ans);
        for(int i=0;i<n;i++){
            if(heights[i]!=ans[i])
                len++;
            
        }
        return len;

        
    }
}
