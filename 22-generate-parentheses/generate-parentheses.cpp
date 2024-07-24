class Solution {
public:

    void backtrack(string sol,vector<string> &res,int n,int open,int close)
    {
        if(sol.size() == 2*n)
        {
            res.push_back(sol);
            return;
        }
        if(open < n)
        {
            sol.push_back('(');
            backtrack(sol,res,n,open+1,close);
            sol.pop_back();
        }

        if(open>close)
        {
            sol.push_back(')');
            backtrack(sol,res,n,open,close+1);
            sol.pop_back();
        }


    }

    vector<string> generateParenthesis(int n) {
        
        // string sol;
        vector<string> res;

        backtrack("",res,n,0,0);

        return res;

    }
};