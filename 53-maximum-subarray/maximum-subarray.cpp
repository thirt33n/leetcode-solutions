class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int so_far = INT_MIN,end_here = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            end_here+=nums[i];
            if(so_far<end_here)
                    so_far = end_here;
            if (end_here<0) 
                    end_here =0;
        }
        return so_far;
    }
};