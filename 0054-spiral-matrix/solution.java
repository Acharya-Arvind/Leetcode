class Solution {
    public List<Integer> spiralOrder(int[][] m) {
        List<Integer> ans=new ArrayList<>();
        int top=0,left=0;
        int bottom=m.length-1;
        int right=m[0].length-1;
        while(left<=right && top<=bottom){
            for(int i=top;i<=right;i++){
                ans.add(m[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans.add(m[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.add(m[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.add(m[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
}
