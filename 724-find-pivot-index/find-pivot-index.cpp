class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftSum;
        vector<int> rightSum;

        int totSum = 0;

        int temp;

        for(int i=0;i<n;i++)
        {
            if(i-1<0)
                leftSum.push_back(0);
            else{
                 temp += nums[i-1];
                leftSum.push_back(temp);
            }
            totSum+=nums[i];
        }

        for(int i=0;i<n;i++)
        {
            totSum=totSum-nums[i];
            rightSum.push_back(totSum);
        }

       for(int i=0;i<n;i++)
       {
            if(leftSum[i] == rightSum[i])
                return i;
       }

       

        return -1;

    }
};