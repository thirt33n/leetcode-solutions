class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();

        vector<int> cloner = heights;
        
        sort(cloner.begin(),cloner.end());
        int counter = 0;

        for(int i=0;i<n;i++)
        {
            if(cloner[i]!=heights[i])   
                counter++;
        }
        return counter;
    }
};