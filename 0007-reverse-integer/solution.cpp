class Solution {
public:
    int reverse(int x) {
        
        cout<<INT_MIN<<" "<<INT_MAX;
        int flag=0;
        if(x<0)
        flag=1;
        int ans=abs(x);
        long res=0;
        while(ans>0){
            res=(res*10)+ans%10;
            ans/=10;
        }

        if(res<INT_MIN || res>INT_MAX)
        return 0;
        if(flag){
            return res-(2*res);
        }
        else{
            return res;
        }
        

        
    }
};
