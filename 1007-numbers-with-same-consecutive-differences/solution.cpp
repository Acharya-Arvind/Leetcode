class Solution {
public:
    void backtrack(int num,int n,vector<int>& ans,int k){
        if(n==0){
            ans.push_back(num);
            return;
        }
        if((num%10)-k>=0) backtrack((num*10)+((num%10)-k),n-1,ans,k);
        if(k!=0 && (num%10)+k<10) backtrack((num*10)+((num%10)+k),n-1,ans,k);
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        for(int i=1;i<10;i++){
            backtrack(i,n-1,ans,k);
        }
        return ans;
    }
};
