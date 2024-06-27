class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> mapper;
         int sol = 0;
        for(vector<int> v:edges)
        {
            mapper[v[0]]++;
            mapper[v[1]]++;
        }
     
        for(auto pair:mapper)
        {
            if(pair.second == mapper.size()-1)
                sol = pair.first;
        }
        return sol;

    }   
};