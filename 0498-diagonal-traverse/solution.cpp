class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m=mat.size();
        int n=mat[0].size();
        int i=0,j=0;
        int ind=0;
        bool flag=true;
        while(ind<m+n-1){
            if(ind%2==0){
                while(i<m && j<n && i>=0 && j>=0){
                    ans.push_back(mat[i][j]);
                    i--;
                    j++;
                }
                if(i<0 && j==n){
                    i+=2;
                    j--;
                }
                else if(i<0){
                    i++;
                }
                else if(j==n){
                    i+=2;
                    j--;
                }
            
            }
            else{
                while(i<m && j<n && i>=0 && j>=0){
                    ans.push_back(mat[i][j]);
                    i++;
                    j--;
                }
                if(j<0 && i==m){
                    j+=2;
                    i--;
                }
                else if(j<0){
                    j++;
                }
                else if(i==m){
                    j+=2;
                    i--;
                }
            }
            ind++;
        }
        return ans;
    }
};
