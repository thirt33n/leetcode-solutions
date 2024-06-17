class Solution {
public:
    bool judgeSquareSum(int c) {
        long beg = 0,end=sqrt(c);

        cout<<end;
       

        while(beg<=end)
        {
            long sums = pow(beg,2)+pow(end,2);

            if(sums == c)
                return true;
            else if(sums < c)
                beg++;
            else
                end--;
        }

        return false;


    }
};