class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> sol;
        for(int i=0;i<names.size();i++)
        {
            sol.push_back({names[i],heights[i]});
        }
        sort(sol.begin(),sol.end(),[](pair<string,int> a,pair<string,int> b){return a.second>b.second;});
        vector<string> ans;
        for(pair as:sol)
        {
            ans.push_back(as.first);
        }
        return ans;

        
    }
};

auto init = []() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
