class Solution {
public:
    bool checkPerfectNumber(int num) {

        if(num == 1)
            return false;

        int summer = 0;
        
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
                summer+=i;
            // cout<<summer<<endl;
        }   

        return summer+1==num;

    }
};