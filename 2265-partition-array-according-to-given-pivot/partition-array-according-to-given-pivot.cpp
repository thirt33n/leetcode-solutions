class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // int i = 0,j=nums.size()-1;
        vector<int> left,right,tar;
        int n = nums.size();
        for(int i:nums)
        {
            if(i<pivot)
                left.push_back(i);
            else if(i>pivot)
                right.push_back(i);
            else
                tar.push_back(i);
        }

        vector<int> sol;
        sol.insert(sol.end(),left.begin(),left.end());
        sol.insert(sol.end(),tar.begin(),tar.end());
        sol.insert(sol.end(),right.begin(),right.end());

        return sol;
    }
};