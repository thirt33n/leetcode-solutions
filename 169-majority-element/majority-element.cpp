class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0;
        int cur;
        for(int i=0;i<nums.size();i++)
        {
            if(freq == 0)
            {
                cur = nums[i];
                freq++;
            }

            else if(nums[i] != cur)
            {
                freq--;
                // cur = nums[i];
            }
            else{
                freq++;
            }
            cout<<cur<<" "<<freq<<endl;
        }
        return cur;
    }
};

// // when i = 0,freq = 0,
//     cur = 2
//     freq = 1
// when i=1 freq 1
// cur  =2 freq 2
// when i=2 freq 2
//     cur 2
//     freq 1

