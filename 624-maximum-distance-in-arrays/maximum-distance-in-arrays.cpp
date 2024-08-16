class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int smallest = arrays[0][0]; //initial smallest element;
        int largest = arrays[0].back(); //initial largest element;
        int m = arrays.size();
        int sol = INT_MIN;
        for(int i=1;i<m;i++)
        {
            int largArray = arrays[i].back();
            int smalArray = arrays[i][0];

            int dist1 = abs(largArray - smallest);
            int dist2 = abs(largest - smalArray);
            int  dist = max(dist1,dist2);
            sol = max(sol,dist);

            smallest = min(smallest,smalArray);
            largest = max(largest,largArray);
        }
        return sol;
    }
};