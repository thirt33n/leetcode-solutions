class Solution {
public:

    int noOfBoqs(vector<int>& bloomDay,int mid,int k)   
    {
        int noOfBoq = 0;
        int c = 0;

        for(int i:bloomDay)
        {
            if(i<=mid)
                c++;
            else
                c= 0;
            
            if(c==k)
            {    noOfBoq++;
                 c = 0;
            }   
        }
        return noOfBoq;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long n = bloomDay.size();
 
       if(static_cast<long long>(m)*static_cast<long long>(k) > n)
            return -1;


        // int minDay = min(bloomDay.begin(),bloomDay.end());
        int start = 0;
        int end = 0;
        
        // max(bloomDay.begin(),bloomDay.end());
        for(int i:bloomDay)
            end = max(i,end);

        int counter = -1;
        while(start<=end)
        {
            int mid = (start+end)/2;

            int boqs = noOfBoqs(bloomDay,mid,k);

            if(boqs>=m)
            {
                counter = mid;
                end = mid-1;
            }
            else
                start = mid+1;
        }

        return counter;
        

    }
};