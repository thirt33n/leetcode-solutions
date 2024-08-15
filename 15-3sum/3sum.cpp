class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int f,r = n-1;
        vector<vector<int>> sol;
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i] == nums[i-1])
                continue;
            f = i+1;
            r = n-1;
            while(f<r)
            {
                int sum =nums[i]+nums[f]+nums[r];
                if(sum>0)
                    r--;
                else if(sum<0)
                    f++;
                else
                    {
                        sol.push_back({nums[i],nums[f],nums[r]});
                        while(f<r && nums[f] == nums[f+1]) f++;
                        while(f<r && nums[r] == nums[r-1]) r--;
                    
                        f++;
                        r--;
                    }
                
            }
        }
        return sol;
    }
};