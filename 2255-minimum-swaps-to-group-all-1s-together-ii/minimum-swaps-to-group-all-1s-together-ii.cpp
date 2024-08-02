class Solution {
public:

    int swapper(vector<int>& nums,int n)
    {
        int len = nums.size();
        int totNo = 0;

        for(int i:nums) //Totoal number of 1s or 0s in the array
        {
            if(i == n)
                totNo++;    //this is the size of the sliding window
        }
         
        if(totNo == len || totNo == 0)
            return 0;

        int l = 0,r = 0,maxWindow = 0,inWindow = 0;

        while(r<totNo) //Taking r to its position
        {
            if(nums[r] == n)
                inWindow++; //Incrementing the amount of 1s or 0s in the current Sliding window
            r++;
        }
        maxWindow = max(maxWindow,inWindow); //storing Max amount of 1s or 0s in the window
        
        while(r<len)  //Traversing the window thru the array
        {
            if(nums[l] == n) // If the starting of the window is 1 or 0 decrement it from the totalCount
                inWindow--;
            if(nums[r] == n) //If the ending of the window is 1 or 0 increment 
                inWindow++;
            l++;
            r++; //Move the winow
            maxWindow = max(maxWindow,inWindow);
        }
        return totNo - maxWindow; //Total 1s/0s in the array - max 1/0 in the sliding window
    }

    int minSwaps(vector<int>& nums) {
        int zeroesTog = swapper(nums,0);
        int onesTog = swapper(nums,1);

        return min(zeroesTog,onesTog);
    }
};