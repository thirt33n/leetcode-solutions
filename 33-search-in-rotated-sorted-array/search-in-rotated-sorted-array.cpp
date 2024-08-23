class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l =0,r = nums.size()-1;
        while(l<r)
        {
            int mid = (l+r)/2;
            if(nums[mid]>nums[r])
                l = mid+1;
            else
                r= mid;
        }

        int rotater=l;
        l=0,r= nums.size()-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            int correctMid = (mid+rotater)%nums.size();
            if(nums[correctMid] == target)
                return correctMid;
            if(nums[correctMid] > target)
                r = mid-1;
            else
                l=mid+1; 
        }

        return -1;
    }
};