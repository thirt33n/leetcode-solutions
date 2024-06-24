class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        vector<bool> past(n,false);

        int valid = 0,flips=0;

        for(int i=0;i<n;i++)
        {
            if(i>=k)
            {
                if(past[i-k])
                    valid--;
            }

            if(valid%2 == nums[i])
            {
                if(i+k>n)
                    return -1;
                valid++;
                past[i]=true;
                flips++;
            }
        }
        return flips;
    }
};