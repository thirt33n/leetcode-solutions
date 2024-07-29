class Solution {
public:
    int numTeams(vector<int>& rating) {
        int soln = 0;
        int n =rating.size();

        for(int i=0;i<n;i++)
        {
            int leftSmall = 0,leftBig = 0,rightSmall = 0,rightBig = 0;
            for(int j=0;j<n;j++)
            {
                if(j<i)
                {
                    if(rating[i]>rating[j])
                        leftSmall++;
                    else
                        leftBig++;
                }
                else if(j>i)
                {
                    if(rating[i]>rating[j])
                        rightSmall++;
                    else
                        rightBig++;
                }
            }
        soln+=leftSmall*rightBig+leftBig*rightSmall;
        }
        return soln;
    }
};