class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       
        int counter = 0;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                int inc = nums[i-1]-nums[i]+1;
                counter+=inc;
                nums[i] = nums[i-1]+1;
            }
        }

        
        for(int i:nums)
            cout<<i<<" ";

        return counter;
        
        
        
        // return 0;
    }
};