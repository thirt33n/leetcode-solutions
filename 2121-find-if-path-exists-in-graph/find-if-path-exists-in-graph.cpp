class Solution {
public:

    bool dfs(vector<int> adj[],int source,int dest,vector<int> &visited)
    {
        if(source == dest)
            return true;
        visited[source] = true;
        for(int neigh:adj[source])
        {
            if(!visited[neigh])
            {
                if(dfs(adj,neigh,dest,visited))
                    return true;
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        for(auto k:edges)
        {
            //creating adjacency list
            adj[k[0]].push_back(k[1]);
            adj[k[1]].push_back(k[0]);
        }
        vector<int> visited(n,false);
        return dfs(adj,source,destination,visited);
    }
};