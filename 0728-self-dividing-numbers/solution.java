class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> arr=new ArrayList<>();
        for(int i=left;i<=right;i++){
            int flag=1;
            if(i/10==0){
                arr.add(i);
            }
            else{
                int n=i;
                while(n>0){
                    if(n%10==0){
                        flag=0;
                        break;
                    }
                        if(i%(n%10)!=0){
                        flag=0;
                    }
                    n/=10;
                }
                if(flag==1) arr.add(i);
            }
        }
        return arr;
    }
}
