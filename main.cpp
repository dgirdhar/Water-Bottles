class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = numBottles;
        
        int div = numBottles/numExchange;
        
        while (numBottles >= numExchange) {
            sum += div;
            
            numBottles = div + (numBottles % numExchange);
            
            div = numBottles / numExchange;
        }
        
        return sum;
    }
};
