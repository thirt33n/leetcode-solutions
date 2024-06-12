class Solution {
public:

    void backtracker(vector<vector<int>> &res,vector<int> sol, int n,int k,int start_val)
    {
        if(sol.size()==k)
        {
            res.push_back(sol);
            return;
        }

        for(int i=start_val;i<=n;i++)
        {
            sol.push_back(i);
            backtracker(res,sol,n,k,i+1);
            sol.pop_back();
        }




    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> sol;

        backtracker(res,sol,n,k,1);
        return res;

    }
};