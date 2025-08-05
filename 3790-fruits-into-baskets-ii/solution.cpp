class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans=0;
        vector<bool> vis(baskets.size(),false);
        for(int i=0;i<fruits.size();i++){
            int j;
            for(j=0;j<baskets.size();j++){
                if(vis[j]) continue;
                if(fruits[i]<=baskets[j]){
                    vis[j]=true;
                    break;
                }
            }
            if(j==baskets.size()) ans++;
        }
        return ans;
    }
};
