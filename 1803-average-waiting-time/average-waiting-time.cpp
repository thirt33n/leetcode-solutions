class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n= customers.size();
        int curTime = customers[0][0];
  
        double totWait = 0;
        for(int i=0;i<n;i++)
        {
            if(curTime<customers[i][0])
                curTime = customers[i][0];
            int wtTime = 0;
            curTime+=customers[i][1];
            wtTime = curTime - customers[i][0];
            totWait+=wtTime;
        
        }
        return totWait/n;
    }
};