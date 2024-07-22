class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mapper;
        string sol;
        
        for(char c:s)
            mapper[c]++;
        vector<pair<char,int>> user(mapper.begin(),mapper.end());
        sort(user.begin(),user.end(),[](pair<char,int> a,pair<char,int> b){return a.second>b.second;});
        for(auto pair:user)
        {
            string t(pair.second,pair.first);
            sol+=t;
        }
        return sol;
    }
};