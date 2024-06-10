class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> mapper;


        for(int i= 0 ;i<nums.size();i++)
        {
            int val = target - nums[i];
            if(mapper.find(val)!=mapper.end())
                return {mapper[val],i};
            else
                mapper[nums[i]] = i;
        }

        return {};
    }
};