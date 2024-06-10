class Solution {
public:
    bool check(vector<int>& nums) {
        
        int changer = 0;
        int n = nums.size();
        for(int i = 0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
                changer++;

            if(changer>1)
                return false;
            

        }
        if(changer == 1)
        {
            if(nums[0]<nums[n-1])
                return false;
        }
            return true;
    }
};