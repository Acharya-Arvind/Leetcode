class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> a(n, vector<int>(m,0)); 

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                a[i][j] = image[i][m - 1 - j] == 0 ? 1 : 0;
            }
        }
        
        return a;
    }
};

