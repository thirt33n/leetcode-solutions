class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        // sort(customers.begin(),customers.end(),[](vector<int> a,vector<int> b){return a[0]>b[0];});
        int n= customers.size();
        int curTime = customers[0][0];
    
        cout<<curTime<<endl;
        double totWait = 0;
        for(int i=0;i<n;i++)
        {
            if(curTime<customers[i][0])
                curTime = customers[i][0];
            
            int wtTime = 0;
            curTime+=customers[i][1];
            wtTime = curTime - customers[i][0];

            totWait+=wtTime;
            cout<<curTime<<" "<<wtTime<<" "<<totWait<<" "<<endl;
        
        }
        // cout<<totWait;
        return totWait/n;
    }
};