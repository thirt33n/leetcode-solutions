class Solution {
public:
    int splitNum(int num) {

        vector<int> nos;
        
        while(num!=0)
        {
            nos.push_back(num%10);
            num/=10;
        }

        sort(nos.begin(),nos.end());

        int num1=0,num2 = 0;

        for(int i=0;i<nos.size();i++)
        {
            if(i%2 == 0)
                num1 = num1*10+nos[i];
            else
                num2 = num2*10+nos[i];
        }


        return num1+num2;
        
    }
};