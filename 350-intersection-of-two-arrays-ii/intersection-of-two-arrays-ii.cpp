class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sol;
        unordered_map<int,int> mapper1;
        unordered_map<int,int> mapper2;
        for(int i:nums1)
            mapper1[i]++;
        for(int i:nums2)
            mapper2[i]++;

        for(auto pair:mapper1)
        {
            if(mapper2.find(pair.first)!=mapper2.end())     //Element of m1 is present in m2;
            {
                int nos = min(pair.second,mapper2[pair.first]);
                for(int i=0;i<nos;i++)
                    sol.push_back(pair.first);
            }
        }
        return sol;
    }
};