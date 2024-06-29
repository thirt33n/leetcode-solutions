class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trusters(n+1,0);
        for(vector<int> t:trust)
        {
            trusters[t[0]]--;
            trusters[t[1]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(trusters[i] == n-1)
                return i;
        }
        return -1;
    }
};