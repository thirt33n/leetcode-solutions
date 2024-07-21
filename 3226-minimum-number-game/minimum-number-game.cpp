class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // vector<int> sol;
        for(int i=0;i<nums.size()-1;i=i+2)
        {
            swap(nums[i],nums[i+1]);
        }
        return nums;

    }
};