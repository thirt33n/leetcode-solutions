class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        int init = nums.size();
        while(j<init)
        {
        
            if(nums[i] == nums[j])
            {
                nums.erase(nums.begin()+j);
                init--;
            }
            else
            {
                i++;
                j++;
            }
        }
        return i+1;
    }
};