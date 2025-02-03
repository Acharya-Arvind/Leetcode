class Solution {
    public List<List<Integer>> mergeSimilarItems(int[][] items1, int[][] items2) {
        List<List<Integer>> ans=new ArrayList<>();
        TreeMap<Integer,Integer> mp=new TreeMap<>();
        for(int i=0;i<items1.length;i++){
            mp.put(items1[i][0],mp.getOrDefault(items1[i][0],0)+items1[i][1]);
        }
        for(int i=0;i<items2.length;i++){
            mp.put(items2[i][0],mp.getOrDefault(items2[i][0],0)+items2[i][1]);
        }
        for(int x:mp.keySet()){
            List<Integer> sub=new ArrayList<>();
            sub.add(x);
            sub.add(mp.get(x));
          ans.add(sub);
        }
        return ans;
    }
}
