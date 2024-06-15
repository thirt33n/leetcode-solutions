class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        vector<pair<int,int>> container;

        int n = profits.size();

        for(int i=0;i<n;i++)
        {
            container.push_back({capital[i],profits[i]});
        }
        sort(container.begin(),container.end());

        int i = 0;
        priority_queue<int> maxCap;

        while(k--)
        {
            while(i<n && container[i].first<=w)
            {
                   maxCap.push(container[i].second);
                    i++;
                
            }
            if(maxCap.empty())
                    break;
                w+=maxCap.top();
                maxCap.pop();
            
        }

        return w;

    }
};