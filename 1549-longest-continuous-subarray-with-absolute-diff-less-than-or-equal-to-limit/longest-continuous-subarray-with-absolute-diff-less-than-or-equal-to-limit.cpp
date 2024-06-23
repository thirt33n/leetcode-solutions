class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> maxer;
        deque<int> miner;
        int left=0,right=0,lenth = 0;

        for(right=0;right<nums.size();right++)
        {
            while(!maxer.empty() && nums[right]<maxer.back())
                maxer.pop_back();
            maxer.push_back(nums[right]);

            while(!miner.empty() && nums[right]>miner.back())
                miner.pop_back();
            miner.push_back(nums[right]);

            while(abs(maxer.front() - miner.front())>limit)
            {
                if(nums[left] == miner.front())
                    miner.pop_front();
                if(nums[left] == maxer.front())
                    maxer.pop_front();
                left++;
            }

            lenth = max(lenth,right - left+1);
        }
        return lenth;
    }
};