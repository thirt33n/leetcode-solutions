class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] > b[1];
        });

        int counter = 0;
        int t = truckSize;
        int i=0;

        while(t>0 && i<boxTypes.size())
        {
            if(boxTypes[i][0]==0)
                i++;
            else{
                counter+=boxTypes[i][1];
                t--;
                boxTypes[i][0]--;
            }
        }
        return counter;
        // return 0;
    }
};