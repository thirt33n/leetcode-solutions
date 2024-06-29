class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> sol(n);
        vector<vector<int>> ans;

        for(vector<int> edge:edges)
        {
            sol[edge[1]].push_back(edge[0]);
        }

        for(int i=0;i<n;i++)
        {
            vector<int> ancestor;
            set<int> visited;
            childs(i,sol,visited);

            for(int j = 0;j<n;j++)
            {
                if(j == i)
                    continue;
                if(visited.find(j)!=visited.end())
                    ancestor.push_back(j);  
            }
            ans.push_back(ancestor);
        }


        return ans;
    }

    void childs(int i,vector<vector<int>>&sol,set<int>& visited)
    {
        visited.insert(i);

        for(int k : sol[i])
        {
            if(visited.find(k) == visited.end())
                childs(k,sol,visited);
        }
    }
};