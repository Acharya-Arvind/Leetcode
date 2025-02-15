class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        map<double,vector<int>> mp;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                vector<int> v(2,0);
                v[0]=arr[i];
                v[1]=arr[j];
                mp[(double)arr[i]/arr[j]]=v;
            }
        }
        vector<int> ans(2,0);
        int i=0;
        string s;
        for(auto x:mp){
            if(i==k)break;
            ans=x.second;
            i++;
        }
        return ans;
    }
};
