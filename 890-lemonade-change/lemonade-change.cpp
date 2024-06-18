class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> mapper;
        
        for(int bill:bills)
        {
            if(bill == 5)
                mapper[5]++;

            if(bill == 10)
            {
                if(mapper[5]<1)
                    return false;
                else
                {
                    mapper[5]--;
                    mapper[10]++;
                }
            }

            if(bill == 20)
            {
                if(mapper[10]<1)
                {
                    if(mapper[5]<3)
                        return false;
                    else
                    {
                        mapper[5]-=3;
                        mapper[20]++;
                    }

                }
                else
                {
                    if(mapper[5]<1)
                        return false;
                    else
                    {
                        mapper[10]--;
                        mapper[5]--;
                        mapper[20]++;
                    }
                }
            }
        }
        return true;
    }
};