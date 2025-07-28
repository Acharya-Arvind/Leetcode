class Solution {
    void logic(int ind,int[] candidates,int target,ArrayList<Integer> temp, List<List<Integer>> ans){
        if(target==0){
            ans.add(new ArrayList<>(temp));
            return;
        }

        for(int i=ind;i<candidates.length;i++){
            if(i>ind && candidates[i-1]==candidates[i]) continue;
            if(candidates[i]>target) continue;
            temp.add(candidates[i]);
            logic(i+1,candidates,target-candidates[i],temp,ans);
            temp.remove(temp.size()-1);
        }

    }
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        List<List<Integer>> ans=new ArrayList<>();
        logic(0,candidates,target,new ArrayList<>(),ans);
        return ans;
    }
}
