class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n  = nums.size();
        int sum = 0;
        int i = 0;
        while(i<n-1)
        {
            sum+= min(nums[i],nums[i+1]);
            i=i+2;
        }
        return sum;
    }
};