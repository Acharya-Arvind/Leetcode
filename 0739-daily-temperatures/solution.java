class Solution {
    public int[] dailyTemperatures(int[] t) {
        Stack<Integer> a=new Stack<>();
        int[] ans=new int[t.length];
        for(int i=0;i<t.length;i++){
            while(!a.isEmpty() && t[i]>t[a.peek()]){
                int ind=a.pop();
                ans[ind]=i-ind;
            }
            a.push(i);
        }
        return ans;
    }
}
