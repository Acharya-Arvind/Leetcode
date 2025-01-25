class Solution {
    public List<Integer> getRow(int n) {
        List<Integer> ans=new ArrayList<>();
        for(int i=0;i<=n;i++){
            if(i==0) ans.add(1);
            else ans.add(0);
        }
        for(int i=1;i<=n;i++){
            for(int j=i;j>0;j--){
                ans.set(j,ans.get(j-1)+ans.get(j));
            }
        }
        return ans;
    }
}
