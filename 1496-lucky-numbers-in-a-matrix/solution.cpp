class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size();
        int n=matrix[0].size();
        unordered_map<int,int> mp;
        for(int i=0;i<m;i++){
            mp[*min_element(matrix[i].begin(),matrix[i].end())]++;
        }
        for(int i=0;i<n;i++){
            int c=INT_MIN;
            for(int j=0;j<m;j++){
                if(c<matrix[j][i]) c=matrix[j][i];
            }
            if(mp[c]>0) ans.push_back(c);
        }
        return ans;
    }
};
