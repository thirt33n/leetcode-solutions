class Solution {
public:
   
    void backtrack(vector<int> nums, vector<vector<int>>& output, int start) {
        if (start == nums.size()) {
            output.push_back(nums);
        }
        for (int i = start; i < nums.size(); ++i) {
            if (i != start && nums[i] == nums[start]) continue;
            swap(nums[i], nums[start]);
            backtrack(nums, output, start + 1);
        }
    }

     vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> output;
        // sort(begin(nums), end(nums));
        sort(nums.begin(),nums.end());
        backtrack(nums, output, 0);
        return output;
    }
};