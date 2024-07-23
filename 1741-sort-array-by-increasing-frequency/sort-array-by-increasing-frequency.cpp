class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mapper;
        vector<int> sol;
       
        for(int i:nums)
            mapper[i]++;
       
        vector<pair<int,int>> checker(mapper.begin(),mapper.end());
        
        sort(checker.begin(),checker.end(),[](pair<int,int> a,pair<int,int> b){if(a.second==b.second) return a.first>b.first; return a.second<b.second;}); 
        
        
        for(auto p:checker)
            sol.insert(sol.end(),p.second,p.first);
        return sol;
    }
};