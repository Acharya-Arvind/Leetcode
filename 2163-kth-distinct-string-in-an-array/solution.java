class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap<String,Boolean> ans=new HashMap<>();
        for(int i=0;i<arr.length;i++){
            if(ans.containsKey(arr[i])){
                ans.put(arr[i],false);
            }
            else{
                ans.put(arr[i],true);
            }
        }
        int c=0;
        for(String x:arr){
            if(ans.get(x)==true) c++;
            if(c==k) return x;
        }
        return "";
    }
}
