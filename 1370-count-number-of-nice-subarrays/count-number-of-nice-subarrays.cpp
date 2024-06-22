class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int oddCount = 0;
       int ans = 0;
       unordered_map<int,int> mapper;


        for(int i=0;i<n;i++)   //Converting to binary array
        {
            if(nums[i]%2==0)  //It is even
                nums[i] = 0;
            else
                nums[i] = 1; 
        }

        int curSum = 0;

        for(int i:nums)
        {
            curSum+=i;
            if(curSum == k)
                ans++;
            if(mapper.find(curSum-k)!=mapper.end())
                ans+=mapper[curSum-k];
            mapper[curSum]++;
            
        }
        return ans;
    }
};