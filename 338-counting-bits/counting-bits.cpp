class Solution {
public:
    vector<int> countBits(int n) {
        if(n  == 0)
            return {n};
        
        vector<int> dp(n+1);
        dp[0] = 0;
        // dp[1] = 1;
        for(int i=1;i<=n;i++)
        {
            dp[i] = dp[i/2]+i%2;
        }

        return dp;
    }
};