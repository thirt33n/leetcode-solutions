class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftProd(n,1);
        vector<int> rightProd(n,1);
        vector<int> sol(n);
        for(int i=1;i<n;i++)
        {
            leftProd[i] = nums[i-1]*leftProd[i-1]; 
        }
        for(int i=n-2;i>=0;i--)
        {
            rightProd[i] = rightProd[i+1]*nums[i+1];
        }

        for(int i=0;i<n;i++)
        {
            sol[i] = leftProd[i]*rightProd[i];
        }
        return sol;
    }
};