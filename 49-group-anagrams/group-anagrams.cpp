class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>> mapper;
        int i=0;
        for(string s:strs)
        {
            sort(s.begin(),s.end());
            mapper[s].push_back(i);
            i++;
        }
        vector<vector<string>> sol;
        for(auto pair:mapper)
        {
            vector<string> ans;
            for(auto i:pair.second)
                ans.push_back(strs[i]);
            sol.push_back(ans);
        }
        return sol;
    }
};