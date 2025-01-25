class Solution {
    public int getLucky(String s, int k) {
        String ans="";
        for(int i=0;i<s.length();i++){
            ans+=((s.charAt(i)-'a'+1));
        }
        int loop=0;
        while(loop<k){
            int sum=0;
            for(int i=0;i<ans.length();i++){
            sum+=(ans.charAt(i)-'0');
            }
            ans=Integer.toString(sum);
            loop++;
        }
        return Integer.parseInt(ans);
    }
}
