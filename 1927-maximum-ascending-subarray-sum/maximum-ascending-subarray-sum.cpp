class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        if(nums.size()==1)
            return nums[0];
        int res = INT_MIN;
        int t = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            res = max(t,res);
            if(nums[i]>nums[i-1])
                {
                    t+=nums[i];
                }
            else
            {
                t = nums[i];
            }
            res = max(res,t);
        }
        return res;
    }
};