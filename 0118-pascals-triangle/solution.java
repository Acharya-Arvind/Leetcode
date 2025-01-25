class Solution {
    public List<List<Integer>> generate(int numRows) {
      int n=numRows;
        int c=1;
        List<List<Integer>> arr=new ArrayList<>();
        
        for(int i=0;i<n;i++){
            List<Integer> vec=new ArrayList<>();
            for(int j=0;j<=i;j++){
                if(i==0||j==0) c=1;
                else{
                    c=c*(i-j+1)/j;
                }
                vec.add(c);
            }
            arr.add(vec);

        }
       return arr;
   }
}
