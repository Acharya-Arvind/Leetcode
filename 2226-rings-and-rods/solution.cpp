class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,unordered_set<char>> mp;
        int ans=0;
        for(int i=0;i<rings.length();i+=2)
            mp[rings[i+1]].insert(rings[i]);
        for(auto x:mp) {
            if(x.second.size()==3) ans++;
        } 
        return ans;
    }
};
