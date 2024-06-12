class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // sort(nums.begin(),nums.end())
        int n = nums.size();
        if(nums[0]<= nums[n-1])
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]>nums[i+1])
                    return false;
            }   
        }
        else{
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]<nums[i+1])
                    return false;
            } 
        }
        return true;
    }
};

auto init = []() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
