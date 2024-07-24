class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int index=0;
        vector<pair<int,int>> mapper;
        
        for(int n:nums)
        {
            string as = to_string(n);
            string newNum = "";
            for(char c:as)
            {
                int comp = c - '0';
                newNum+=to_string(mapping[comp]);

            }
            int nn = stoi(newNum);
            mapper.push_back({nn,index});
            index++;
        }

        // for(auto p:mapper)
        //     cout<<p.first<<":"<<p.second<<endl;
        vector<int> sol;
        sort(mapper.begin(),mapper.end());
        for(auto pp:mapper)
        {
            sol.push_back(nums[pp.second]);
        }

        return sol;
    }
};