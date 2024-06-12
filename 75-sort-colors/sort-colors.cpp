class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n = nums.size();
       int low = 0;
       int high = n-1;
       int current =0;

       while(current<=high)
       {
           if(nums[current] == 0)
           {
               swap(nums[current],nums[low]);
                low++;
                current++;
           }
           else if(nums[current] == 2)
           {
               swap(nums[current],nums[high]);
               high--;
           }
           else{
               current++;
           }
       }
    }
};
