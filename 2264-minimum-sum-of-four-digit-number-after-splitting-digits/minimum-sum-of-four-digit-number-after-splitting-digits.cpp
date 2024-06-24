class Solution {
public:
    int minimumSum(int num) {
        int n  = num;
        vector<int> nos(4);
        int i=0;
        while(n>0)
        {
            nos[i] = n%10;
            n/=10;
            i++;
        }
        sort(nos.begin(),nos.end());
        int n1 = nos[0]*10+nos[2];
        int n2 = nos[1]*10+nos[3];

        return n1+n2;
    }
};