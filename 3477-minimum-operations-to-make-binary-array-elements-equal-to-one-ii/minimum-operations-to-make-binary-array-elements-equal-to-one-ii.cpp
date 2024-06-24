class Solution {
public:
    int minOperations(vector<int>& nums) {
        int counter =0;
        for(int i:nums)
        {
            if(i == counter%2)
                counter++;
        }
        return counter;
    }
};