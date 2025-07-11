class Solution {
public:
    void dfs(string node, unordered_map<string, priority_queue<string, vector<string>, greater<string>>>& mp, vector<string>& res) {
        auto& pq = mp[node];
        while (!pq.empty()) {
            string next = pq.top();
            pq.pop();
            dfs(next, mp, res);
        }
        res.push_back(node);
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, priority_queue<string, vector<string>, greater<string>>> mp;
        for (auto& ticket : tickets) {
            mp[ticket[0]].push(ticket[1]);
        }
        vector<string> res;
        dfs("JFK", mp, res);
        reverse(res.begin(), res.end());
        return res;
    }
};
