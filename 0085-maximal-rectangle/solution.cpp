class Solution {
public:
    void logic(stack<int>& s,int& ans,vector<int>& heights,int n){
        
        for(int i=0;i<n;i++){
            while(!s.empty() && heights[i]<heights[s.top()]){
                int ind=s.top();
                s.pop();
                int left=s.empty()?-1:s.top();
                int right=i;
                ans=max(ans,heights[ind]*(right-left-1));
            }
            s.push(i);
        }
         while(!s.empty()){
                int ind=s.top();
                s.pop();
                int left=s.empty()?-1:s.top();
                int right=n;
                ans=max(ans,heights[ind]*(right-left-1));
            }
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> heights(n,0);
        stack<int> s;
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1') heights[j]++;
                else heights[j]=0;
            }
            logic(s,ans,heights,n);
        }
        return ans;
    }
};
