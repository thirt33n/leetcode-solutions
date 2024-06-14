class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return 0;
        int counter = 0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]<=nums[i-1])
            {
                int inc = nums[i-1]-nums[i]+1;
                counter+=inc;
                nums[i] = nums[i-1]+1;
            }
        }

        return counter;

    }
};