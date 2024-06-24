class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        double minP = nums[0];
        double maxP = nums[0];
        double maxi = nums[0];

        for(int i = 1; i < n; i++) {
            if(nums[i] < 0) {
                swap(minP, maxP);
            }

            maxP = max(static_cast<double>(nums[i]), static_cast<double>(nums[i]) * maxP);
            minP = min(static_cast<double>(nums[i]), static_cast<double>(nums[i]) * minP);

            maxi = max(maxi, maxP);
        }

        return maxi;
    }
};
