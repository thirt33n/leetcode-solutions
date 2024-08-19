class Solution {
public:

    void backtrack(int start,vector<int> &ans,vector<vector<int>>&sol, vector<int> &nums)
    {
        sol.push_back(ans);

        for(int i=start;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
            backtrack(i+1,ans,sol,nums);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sol;
        vector<int> ans;
        backtrack(0,ans,sol,nums);
        return sol;
    }
};