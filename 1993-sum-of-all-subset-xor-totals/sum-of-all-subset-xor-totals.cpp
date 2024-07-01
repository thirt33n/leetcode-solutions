class Solution {
public:

    int sumXor(vector<int> &nums,int index,int cursum)
    {
        if(index == nums.size())
            return cursum;
        int include = sumXor(nums,index+1,cursum^nums[index]);
        int dontInclude = sumXor(nums,index+1,cursum);

        return include+dontInclude;
    }

    int subsetXORSum(vector<int>& nums) {
        // vector<int> subsets;
        // int xorer = 0;
        return sumXor(nums,0,0);

    }
};