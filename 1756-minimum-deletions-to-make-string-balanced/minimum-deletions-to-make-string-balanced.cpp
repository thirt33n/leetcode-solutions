class Solution {
public:
    int minimumDeletions(string s) {
        int sol = s.size();
        int as = 0,bs = 0;
        for(char c:s)
        {
            if(c == 'a')
                as++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'a')
            {
                as--;
            }
            sol = min(sol,as+bs);
            if(s[i] == 'b')
                bs++;
        }

        return sol;
    }
};