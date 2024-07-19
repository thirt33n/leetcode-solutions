class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
     unordered_set<int> rowMaxxing;
     unordered_set<int>colMaxxing;
     
     for(int i=0;i<matrix.size();i++)
     {
        int rowMin = INT_MAX;
        for(int j=0;j<matrix[0].size();j++)
        {
            rowMin = min(rowMin,matrix[i][j]);
        }
        rowMaxxing.insert(rowMin);

     }

     for(int j=0;j<matrix[0].size();j++)
     {
        int colMax = INT_MIN;
        for(int i=0;i<matrix.size();i++)
        {
            colMax = max(matrix[i][j],colMax);
        }
        colMaxxing.insert(colMax);
     }

        vector<int> sol;
        for(int i:rowMaxxing)
        {
            if(colMaxxing.contains(i))
                sol.push_back(i);
        }
        return sol;

    }
};