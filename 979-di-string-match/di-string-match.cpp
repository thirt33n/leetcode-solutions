class Solution {
public:
    vector<int> diStringMatch(string s) {
        int Icount = 0;
        // int Dcount = 0;
        int n = s.size();
        int Dcount = n;
        vector<int> sol;

        for(char c:s)
        {
            if(c == 'I')
            {
                sol.push_back(Icount);
                Icount++;
            }
            if(c == 'D')
            {
                sol.push_back(Dcount);
                Dcount--;
            }
          
        }
        sol.push_back(Icount);
        return sol;

    }
};