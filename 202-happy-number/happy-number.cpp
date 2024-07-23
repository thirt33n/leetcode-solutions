class Solution {
public:
    int newNum(int n)
    {
        int sum=0;
        while(n>0)
        {
            int num=n%10;
            sum+=num*num;
            n/=10;
        }
        // cout<<sum<<endl;
        return sum;
    }

    
    bool isHappy(int n) {
        unordered_set<int> setter;
        while(n!=1 && setter.find(n)==setter.end())
        {
            setter.insert(n);
            n = newNum(n);
        }

        return n==1;
    }


    
};