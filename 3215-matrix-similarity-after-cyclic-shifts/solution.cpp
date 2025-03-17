class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        k%=mat[0].size();
        if(k==0) return true;
        vector<vector<int>> subm(mat.size(),vector<int> (mat[0].size()));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                subm[i][j]=mat[i][j];
            }
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<k;j++){
                int temp=mat[i][0];
                for(int l=1;l<mat[i].size();l++){
                    mat[i][l-1]=mat[i][l];
                }
                mat[i][mat[i].size()-1]=temp;
            }
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(subm[i][j]!=mat[i][j]) return false;
            }
            
        }
        return true;
    }
};
