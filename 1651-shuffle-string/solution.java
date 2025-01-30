class Solution {
    public String restoreString(String s, int[] indices) {
        String ans="";
        TreeMap<Integer,Character> mp=new TreeMap<>();
        for(int i=0;i<s.length();i++){
            mp.put(indices[i],s.charAt(i));
        }
        for(int x:mp.keySet()) ans+=mp.get(x);
        return ans;
    }
}
