class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> prefix_sum;
        vector<int> ans;
        prefix_sum.push_back(n-(n&n-1));
        n=n&n-1;
        int i=0;
        while(n!=0){
            prefix_sum.push_back((n-(n&n-1)));
            n=(n&n-1);
        }
        for(int i=0;i<prefix_sum.size();i++) cout<<prefix_sum[i]<<" ";
        for(int i=0;i<queries.size();i++){
            long long sum=1;
            for(int j=queries[i][0];j<=queries[i][1];j++){
                sum=(sum*prefix_sum[j])%1000000007;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
