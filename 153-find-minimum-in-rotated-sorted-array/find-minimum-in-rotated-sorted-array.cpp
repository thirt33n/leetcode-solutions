class Solution {
public:
    int findMin(vector<int>& nums) {
        int beg = 0,end = nums.size()-1;
        
    

          if(nums[beg]<=nums[end])
            return nums[beg];
        
        while(beg<end)
        { 
               int mid = (beg+end)/2; 
            if(nums[mid]>=nums[end])
                beg = mid+1;
            else
                end = mid;
        }
        return nums[beg];
    }
};