class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> sol;

        for(int i:nums)
        {
            if(i<pivot)
                sol.push_back(i);
        }

        
        for(int i:nums)
        {
            if(i == pivot)
                sol.push_back(i);
        }

        
        for(int i:nums)
        {
            if(i>pivot)
                sol.push_back(i);
        }

        return sol;
    }
};