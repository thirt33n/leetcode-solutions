class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        
      vector<long long> ranker(n,0);

        for(vector<int> road:roads)
        {
            ranker[road[0]]++;
            ranker[road[1]]++;
        }
      
        sort(ranker.begin(),ranker.end());

        //
       
        long long sub = 1;
        long long imp = 0;

        for(long long i:ranker)
        {
            imp+=(sub*i);
            sub++;
        }
        return imp;



    }
};