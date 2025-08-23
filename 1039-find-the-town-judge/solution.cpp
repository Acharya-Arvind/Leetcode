class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> arr(n,0),count(n,0);
        for(int i=0;i<trust.size();i++){
            arr[trust[i][1]-1]++;
            count[trust[i][0]-1]++;
        }
        for(int i=0;i<arr.size();i++){
           if(arr[i]==n-1 && count[i]==0) return i+1;
        }
        return -1;
    }
};
