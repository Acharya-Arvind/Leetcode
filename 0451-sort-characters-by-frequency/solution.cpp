class Solution {
public:
    string frequencySort(string s) {

    map<char,int> mp;
    for(char c : s) {
        mp[c]++;
    }
    priority_queue<pair<int,char>> pq;
    for(auto& x : mp) {
        pq.push({x.second, x.first});
    }
    string ans;
    while(pq.size()!=0){
        pair<int,char> temp=pq.top();
        pq.pop();
        for(int j = 0; j < temp.first; j++) {
            ans += temp.second;
        }
    }
    
    return ans;
    }
};
