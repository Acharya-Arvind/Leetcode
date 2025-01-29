class Solution {
    public String sortSentence(String s) {
        String[] arr=s.split(" ");
        String ans="";
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr.length;j++){
                if(arr[j].charAt(arr[j].length()-1)-'0'==i+1){
                    ans+=arr[j].substring(0,arr[j].length()-1);
                    break;
                }
            }
            if(i!=arr.length-1) ans+=" ";
        }
        return ans;
    }
}
