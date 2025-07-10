class Solution {
public:
    int closestMeetingNode(vector<int>& adj, int node1, int node2) {
        map<int,int> mp1;
        map<int,int> mp2;
        int i=node1;
        int c=1;
        while(true){
            if(i==-1 || mp1[i]!=0) break;
            mp1[i]=c++;
            i=adj[i];
        }
        i=node2;
        c=1;
        while(true){
            if(i==-1 || mp2[i]!=0) break;
            mp2[i]=c++;
            i=adj[i];
        }
        int node=-1;
        int sum=INT_MAX;
        // for(auto x:mp1) cout<<x.first<<"->"<<x.second<<endl;
        // cout<<"--------"<<endl;
        // for(auto x:mp2) cout<<x.first<<"->"<<x.second<<endl;
        for(auto x:mp1){
            if(mp2[x.first]){
                int ans=max(x.second,mp2[x.first]);
                if(ans<sum){
                    sum=ans;
                    node=x.first;
                }
        }
        }
        return node;
    }
};
