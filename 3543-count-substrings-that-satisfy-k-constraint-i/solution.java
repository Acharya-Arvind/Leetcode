class Solution {
    public int countKConstraintSubstrings(String s, int k) {
        int c=0;
        for(int i=0;i<s.length();i++){
            int n0=0,n1=0;
            for(int j=i;j<s.length();j++){
                if(s.charAt(j)=='0') n0++;
                else n1++;
                if(n0<=k || n1<=k) c++; 
            }
        }
        return c;
    }
}
