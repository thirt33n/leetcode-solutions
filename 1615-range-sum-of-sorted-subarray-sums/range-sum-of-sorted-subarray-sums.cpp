#define MOD 1000000007
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subsetSum;
        
        for(int i=0;i<n;i++)
        {
            int asum=0;
            for(int j=i;j<n;j++)
            {
                asum+=nums[j];
                subsetSum.push_back(asum);
            }
        }
        long long finSum = 0;
        sort(subsetSum.begin(),subsetSum.end());
        left-=1;
        right-=1;

        for(int i=left;i<=right;i++)
        {
            // cout<<subsetSum[i]<<" ";
            finSum+=subsetSum[i];
        }

        finSum%=MOD;
        return static_cast<int>(finSum);
    }
};