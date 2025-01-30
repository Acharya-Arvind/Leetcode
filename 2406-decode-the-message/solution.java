class Solution {
    public String decodeMessage(String key, String message) {
        HashMap<Character,Character> mp=new HashMap<>();
        int ind=97;
        for(int i=0;i<key.length();i++){
            if(key.charAt(i)==' ') continue;
            if(mp.containsKey(key.charAt(i))) continue;
            mp.put(key.charAt(i),(char)(ind++));
        }
        String ans="";
        for(int i=0;i<message.length();i++){
            if(message.charAt(i)==' ') ans+=' ';
            else
            ans+=mp.get(message.charAt(i));
        }
        return ans;
    }
}
