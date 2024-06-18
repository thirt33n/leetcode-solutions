class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // unordered_map<int,int> mapper;
        int fives = 0,tens = 0;
        for(int bill:bills)
        {
            if(bill == 5)
                fives++;

            if(bill == 10)
            {
                if(fives<1)
                    return false;
                else
                {
                    fives--;
                    tens++;
                }
            }

            if(bill == 20)
            {
                if(tens<1)
                {
                    if(fives<3)
                        return false;
                    else
                    {
                        fives-=3;
                        // mapper[20]++;
                    }

                }
                else
                {
                    if(fives<1)
                        return false;
                    else
                    {
                        tens--;
                        fives--;
                        // mapper[20]++;
                    }
                }
            }
        }
        return true;
    }
};