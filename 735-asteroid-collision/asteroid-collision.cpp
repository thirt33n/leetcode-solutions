class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> asts;
        for(int ast:asteroids)
        {
            if(ast>0 || asts.empty())
                asts.push(ast);
            else{
                while(!asts.empty() && asts.top()>0 && abs(ast)>asts.top())
                    asts.pop();
                if(!asts.empty() && asts.top()+ast == 0)
                    asts.pop();
                else{
                    if(asts.empty() || asts.top()<0)
                        asts.push(ast);
                }
            }
        }
        vector<int> res;
        while(!asts.empty())
        {
            res.push_back(asts.top());
            asts.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};