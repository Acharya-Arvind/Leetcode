class Solution {
public:
    bool check(vector<vector<int>>& ans,vector<vector<int>>& target){
        
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[0].size();j++){
                if(ans[i][j]!=target[i][j]) return false;
            }
        }
        return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        vector<vector<int>> ans;
        for(int l=0;l<4;l++){
            for(int i=0;i<mat.size();i++){
                vector<int> sub;
                for(int j=mat[0].size()-1;j>=0;j--){
                    sub.push_back(mat[j][i]);
                }
                ans.push_back(sub);
            }
            if(check(ans,target)) return true; 
            mat.erase(mat.begin(),mat.end());
            mat.insert(mat.begin(),ans.begin(),ans.end());
            ans.erase(ans.begin(),ans.end());
        }
        
        
        return false;
    }
};
