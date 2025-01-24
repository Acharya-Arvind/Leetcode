class Solution {
    public boolean squareIsWhite(String s) {
        int right=(s.charAt(0))-'a'+1;
        int left=(s.charAt(1))-'a'+1;
        if((left%2==0 && right%2==0)) return false;
        if((left%2!=0 && right%2!=0)) return false;
        return true;
    }
}
