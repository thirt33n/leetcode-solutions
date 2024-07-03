class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int m,mi;
        if(nums.size()<=4)
            return 0;


        int maxDeldif = 0,minDelDif=0,tmaxDelDif = 0,tminDelDif=0;

        maxDeldif = nums[n-4]-nums[0]; // COnverted the max 3 elements to 0
        minDelDif = nums[n-1]-nums[3];
        tmaxDelDif = nums[n-2]-nums[2];
        tminDelDif = nums[n-3]-nums[1];

        cout<<maxDeldif<<" "<<minDelDif<<" "<<tmaxDelDif<<" "<<tminDelDif;
        vector<int> cases{maxDeldif,minDelDif,tmaxDelDif,tminDelDif};
        int res = *min_element(cases.begin(),cases.end());
    return res;
    }
};