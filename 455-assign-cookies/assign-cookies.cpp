class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int counter=0;

        int gindex = 0,sindex = 0;
        while(sindex < s.size() && gindex<g.size())
        {
            if(s[sindex]>=g[gindex])
            {
                counter++;
                // sindex++;
                gindex++;
            }
           sindex++;
        }
        return counter;
    }
};