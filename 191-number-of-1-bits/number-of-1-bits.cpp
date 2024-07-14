class Solution {
public:
    int hammingWeight(int n) {
        if(n==0)
            return 0;

        int setCount =0;
        while(n>0)
        {
            setCount+=n%2;
            n/=2;
        }
        return setCount;
        
    }
};