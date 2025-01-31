class Solution {
    public int maxScore(String s) {
        int ans=0;
        for(int i=1;i<s.length();i++){
            String s0=s.substring(0,i);
            String s1=s.substring(i);
            int val0=0;
            int val1=0;
            for(int j=0;j<s0.length();j++) if(s0.charAt(j)=='0') val0++;
            for(int j=0;j<s1.length();j++) if(s1.charAt(j)=='1') val1++;
            ans=Math.max(ans,val0+val1);
        }
        return ans;
    }
}
