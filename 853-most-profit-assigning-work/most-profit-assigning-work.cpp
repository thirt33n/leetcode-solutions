class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        vector<pair<int,int>> container(n);

        for(int i=0;i<n;i++)
        {
            container[i] = {difficulty[i],profit[i]};
        }
        sort(container.begin(),container.end());
        sort(worker.begin(),worker.end());

        int np = 0,maxi = 0,index= 0;

        for(int i=0;i<worker.size();i++)
        {
            while(index<n && worker[i]>=container[index].first)
            {
                maxi = max(maxi,container[index].second);
                index++;
            }
            np+=maxi;
        }
        return np;

        // for(auto papa:container)
        // {
        //     cout<<papa.first<<" "<<papa.second<<endl;
        // }

        // return 0;
    }
};