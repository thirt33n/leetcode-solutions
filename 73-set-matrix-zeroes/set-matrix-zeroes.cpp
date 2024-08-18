class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rowZero;
        set<int> colZero;
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == 0)   

                {rowZero.insert(i); colZero.insert(j);}

            }
        }

        // for(int i:zeroIndices)
        //     cout<<i<<" ";

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(rowZero.contains(i) || colZero.contains(j))
                    matrix[i][j] = 0;
            }
        }

    }
};