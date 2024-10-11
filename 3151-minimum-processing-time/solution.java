class Solution {
    public int minProcessingTime(List<Integer> processorTime, List<Integer> tasks) {

        int pt=processorTime.size();
        int t=tasks.size();
        Collections.sort(processorTime);
        Collections.sort(tasks);
        Collections.reverse(tasks);
        int k=0;
        int ans=0;
        

        for(int i=0;i<t;i=i+4,k++){

            ans=Math.max(ans,processorTime.get(k)+tasks.get(i));


        }
        


        return ans;



        
    }
}
