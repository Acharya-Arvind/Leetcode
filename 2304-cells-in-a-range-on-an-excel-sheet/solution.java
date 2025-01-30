class Solution {
    public List<String> cellsInRange(String s) {
        List<String> ans=new ArrayList<>();
        char[] a={s.charAt(0),s.charAt(3)};
        char[] n={s.charAt(1),s.charAt(4)};
        for(char i=a[0];i<=a[1];i++){
            for(char j=n[0];j<=n[1];j++){
                ans.add(Character.toString(i)+Character.toString(j));
            }
        }
        return ans;
    }
}
