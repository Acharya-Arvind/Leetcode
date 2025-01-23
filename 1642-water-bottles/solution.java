class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int bottle=numBottles;
        while(numBottles/numExchange>0){
            
                bottle+=numBottles/numExchange;
                int bot=numBottles%numExchange;
                numBottles/=numExchange;
                numBottles+=bot;
        }
        return bottle;
    }
}
