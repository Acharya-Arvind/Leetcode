class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        String[] ans=new String[names.length];
        TreeMap<Integer,String> t=new TreeMap<>();
        for(int i=0;i<names.length && i<heights.length;i++){
            t.put(heights[i],names[i]);
        }
        int j=ans.length-1;
        for(int x:t.keySet()){
            ans[j--]=t.get(x);
        }
        return ans;
    }
}
