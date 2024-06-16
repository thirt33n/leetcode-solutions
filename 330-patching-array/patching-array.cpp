class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long missingNo = 1,counter = 0;
        int i = 0;

        while(missingNo<=n)
        {
            if(i<nums.size() && nums[i]<=missingNo)
                missingNo+=nums[i++];
            else
            {
                missingNo+=missingNo;
                counter++;
            }
        }
        return counter;
    }
};