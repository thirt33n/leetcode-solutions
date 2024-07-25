class Solution {
public:

    void countingSort(vector<int>& nums)
    {
        unordered_map<int,int> mapper;
        int minV = *min_element(nums.begin(),nums.end());
        int maxV = *max_element(nums.begin(),nums.end());

        for(int num:nums)
            mapper[num]++;
        int i = 0;
        for(int j=minV;j<=maxV;j++)
        {
            if(mapper.find(j)!=mapper.end())
            {
                while(mapper[j]>0)
                {
                    nums[i] =  j;
                    i++;
                    mapper[j]--;
                }
            }
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        countingSort(nums);
        return nums;
    }
};