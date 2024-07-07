class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        if(numExchange>numBottles)
            return numBottles;
        // int emptyBottles = numBottles;
        int totDrunk = numBottles;
        while(numBottles>=numExchange)
        {
            int exch,left;
            exch = numBottles/numExchange;
            left = numBottles%numExchange;
            totDrunk+=exch;
            numBottles = exch+left;
            cout<<exch<<" "<<left<<endl;

        }
        return totDrunk;
    }
};