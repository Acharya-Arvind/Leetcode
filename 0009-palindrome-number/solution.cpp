class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
        return false;
        long long ans=x;
        long long res=0;
        while(x>0){
            res=res*10+x%10;
            x/=10;
            
        }
       return(ans==res);
        
    }
};
