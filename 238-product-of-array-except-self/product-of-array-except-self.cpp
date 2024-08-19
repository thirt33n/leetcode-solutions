class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        // vector<int> leftProd(n,1);
        // vector<int> rightProd(n,1);
        vector<int> sol(n,1);
        int riprod = 1;
        for(int i=1;i<n;i++)
        {
            sol[i] = nums[i-1]*sol[i-1]; 
        }

        for(int i=n-2;i>=0;i--)
        {
            riprod*=nums[i+1];
            sol[i] *=riprod;
        }
        return sol;
    }
};