class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        set<int> setter(nums.begin(),nums.end());
        for(int i=0;i<moveFrom.size();i++)
        {
            setter.erase(setter.find(moveFrom[i]));
            setter.insert(moveTo[i]);
        }
        return vector<int>(begin(setter),end(setter));
    }
};