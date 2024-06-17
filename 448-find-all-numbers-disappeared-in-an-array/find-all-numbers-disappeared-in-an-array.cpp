class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        set<int> bu(nums.begin(),nums.end());
        vector<int> sol;
        for(int i=1;i<=n;i++)
        {
            if(!bu.contains(i))
                sol.push_back(i);
        }

        return sol;
    }
};

auto init = []() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
