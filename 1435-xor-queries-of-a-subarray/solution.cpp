class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> prefix_sum(n);
        vector<int> ans;
        int sum=0;
        for(int i=0;i<n;i++){
            sum^=arr[i];
            prefix_sum[i]=sum;
        }
        // for(int i=0;i<n;i++) cout<<prefix_sum[i]<<" ";
        for(int i=0;i<queries.size();i++){
            int temp=prefix_sum[queries[i][1]];
            if(queries[i][0]!=0){
                temp^=prefix_sum[queries[i][0]-1];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
