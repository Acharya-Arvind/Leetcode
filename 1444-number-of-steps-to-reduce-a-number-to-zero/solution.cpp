class Solution {
public:

    int help(int n,int s){
        if(n==0) return s;
        if(n%2==0){
            return help(n/2,s+1);
        }
        else{
            return help((n-1),s+1);
        }

    }
    int numberOfSteps(int num) {
        return help(num,0);
    }
};
