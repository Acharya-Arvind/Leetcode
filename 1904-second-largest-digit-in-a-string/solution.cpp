class Solution {
public:
    int secondHighest(string s) {
        priority_queue<int> pq;
        set<int> set;
        for(int i=0;i<s.length();i++){
            if(s[i]<='9' && s[i]>='0') set.insert(s[i]-'0');
        }
        for(int x:set){
            pq.push(x);
        }
        if(pq.size()<2) return -1;
        pq.pop();
        return pq.top();
    }
};
