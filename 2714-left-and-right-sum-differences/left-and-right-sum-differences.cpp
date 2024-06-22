class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int sumTot = 0;

        for(int i:nums)
            sumTot+=i;
            
        vector<int> ans(n);

        int lsum=0,rsum=sumTot;

        for(int i=0;i<n;i++)
        {
            rsum -=nums[i];
            cout<<lsum<<" "<<rsum<<endl;
            ans[i] = abs(lsum-rsum);
            lsum+=nums[i];
        }

        return ans;



        
    }
};