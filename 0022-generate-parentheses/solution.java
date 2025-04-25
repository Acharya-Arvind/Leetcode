class Solution {
    void backtrack(List<String> ans,String s,int o,int c){
    if(o==0 && c==0){
        ans.add(s);
        return;
    }
    if(o>0) backtrack(ans,s+'(',o-1,c);
    if(o<c) backtrack(ans,s+')',o,c-1);
}
    public List<String> generateParenthesis(int n) {
        List<String> ans=new ArrayList<>();
        backtrack(ans,new String(),n,n);
        return ans;
    }
}
