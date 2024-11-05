class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int max[c];
        int k=0;
        for(int i=0;i<c;i++){
        int maxi=0;
            for(int j=0;j<r;j++){
                if(maxi<matrix[j][i]) maxi=matrix[j][i];
            }
            max[k]=maxi;
            k++;
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==-1) matrix[i][j]=max[j];
            }

        }
        
        return matrix;
    }
};
