class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        vector<string> ans;
        int n=words.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            mp[words[i]]++;
            if(maxi<mp[words[i]]) maxi=mp[words[i]];
        }
        for(int i=maxi;i>0;i--){
            for(auto x:mp){
                if(ans.size()==k) return ans;
                if(x.second==i) ans.push_back(x.first);
            }
        }
        return ans;
    }
};
