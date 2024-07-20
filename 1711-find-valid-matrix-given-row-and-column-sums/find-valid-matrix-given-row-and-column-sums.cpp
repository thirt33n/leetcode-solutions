class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int  n = rowSum.size();
        int m = colSum.size();
        vector<vector<int>> real(n,vector<int>(m,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x =  min(rowSum[i],colSum[j]);
                real[i][j] = x;
                rowSum[i]-=x;
                colSum[j]-=x;
            }
        }
        return real;
    }
};