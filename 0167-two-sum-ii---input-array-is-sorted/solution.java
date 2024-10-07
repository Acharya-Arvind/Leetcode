class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] a=new int[2];
        a[0]=-1;
        for(int i=0;i<numbers.length;i++){
            for(int j=i+1;j<numbers.length;j++){
                if(numbers[i]+numbers[j]==target){
                a[0]=i+1;
                a[1]=j+1;
                break;
            }
            
        }
        if(a[0]!=-1){
                break;
            }}
            return a;
    }
}
