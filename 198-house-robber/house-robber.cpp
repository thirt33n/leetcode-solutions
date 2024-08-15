class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;

        int a = 0;
        int b= 0;
        for(int n:nums)
        {
            int t = a;
            a = max(b+n,a);
            b = t;
        }
        return a;
    }
};