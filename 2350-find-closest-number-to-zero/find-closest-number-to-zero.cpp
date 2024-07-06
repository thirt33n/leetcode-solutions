class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int init = nums[0];
        for(int i:nums)
        {
            if(abs(i)<abs(init))
                init = i;
        }
        cout<<init;
        // return init<0?-1*init:init;
        if(init<0 && find(nums.begin(),nums.end(),-1*init)!=nums.end())
            return abs(init);
        else
            return init;

    }
};