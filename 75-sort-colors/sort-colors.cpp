class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lastZero = 0,firstTwo = nums.size()-1; 
        int i=0;
        while(i<=firstTwo)
        {
            if(nums[i] == 2)
            {
                swap(nums[i],nums[firstTwo]);
                firstTwo--;
            }
            else if(nums[i] == 0)
            {
                swap(nums[i],nums[lastZero]);
                lastZero++;
                i++;
            }
            else{
                i++;
            }
            // cout<<lastZero<<" "<<firstTwo<<" "i;
            for(int k:nums)
                cout<<k<<" ";
            cout<<endl;
        }
    }
};
