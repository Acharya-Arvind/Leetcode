class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int n=heights.size();
        int ans=0;
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
        return ans;
    }
};
