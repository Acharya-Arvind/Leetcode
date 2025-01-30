class Solution {
    public int mostWordsFound(String[] s) {
        int ans=0;
        for(int i=0;i<s.length;i++){
            String[] arr=s[i].split(" ");
            ans=Math.max(ans,arr.length);
        }
        return ans;
    }
}
