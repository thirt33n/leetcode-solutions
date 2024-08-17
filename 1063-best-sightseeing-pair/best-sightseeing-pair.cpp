class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxPos = INT_MIN;
        // int maxPosInd;
        int res = 0;
        for(int i=0;i<values.size();i++)
        {
            res = max(res,maxPos+values[i]-i);
            maxPos = max(maxPos,values[i]+i);
        }
        return res;
    }
};