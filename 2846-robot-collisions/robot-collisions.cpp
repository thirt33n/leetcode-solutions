class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<int> pp;

        for(int i=0;i<positions.size();i++)
            pp.push_back(i);
        sort(pp.begin(),pp.end(),[&positions](int a,int b){return positions[a]<positions[b];});

        stack<int> ss;
        for(int i:pp)
        {
            if(directions[i] == 'R')
                ss.push(i);
            else
            {
                while(!ss.empty() && healths[i]> 0 )
                {
                    int temp = ss.top();
                    ss.pop();
                    if(healths[temp]<healths[i])
                    {
                        healths[i]--;
                        healths[temp] = 0;
                    }
                    else if(healths[temp]> healths[i])
                    {
                        healths[temp]--;
                        healths[i] = 0;
                        ss.push(temp);
                    }
                    else
                    {
                        healths[temp] = healths[i] = 0;
                    }
                }
            }
        }
        vector<int> sol;
        for(int i:healths)
        {
            if(i>0)
                sol.push_back(i);
        }
        return sol;
    }
};