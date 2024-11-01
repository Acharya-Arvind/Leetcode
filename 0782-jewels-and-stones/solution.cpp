class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int tot=0;
        for(int i=0;i<jewels.size();i++){
            for(int j=0;j<stones.size();j++){
                if(jewels[i]==stones[j]) tot++;
            }
        }
        return tot;


        
    }
};
