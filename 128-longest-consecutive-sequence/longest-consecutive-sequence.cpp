class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> checker(nums.begin(),nums.end());
         if(checker.size()<=1)
            return checker.size();
        int len = 0;
        int maxLen = 1;
        int l =0,r =0;
        for(int i:checker)
        {
            if(checker.contains(i+1))
            {
                r++;
                len = r - l+1;

            } 
            if(!checker.contains(i+1))
            {
                r++;
                l=r;
                maxLen = max(maxLen,len);
                len = 0;
            }
        }
        return maxLen;
    }
};