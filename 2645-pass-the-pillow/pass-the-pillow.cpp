class Solution {
public:
    int passThePillow(int n, int time) {
        int totRounds = time/(n-1);
        int sol = time%(n-1);
        if(totRounds%2 == 0)
            return sol+1;
        else
            return n-sol;
    }
};