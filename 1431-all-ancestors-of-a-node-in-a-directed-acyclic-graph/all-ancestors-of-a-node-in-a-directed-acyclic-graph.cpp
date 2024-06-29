class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> sol(n);
        vector<vector<int>> ans;

        for(vector<int> edge:edges)
        {
            sol[edge[1]].push_back(edge[0]);  //Finding which nodes are 1 step begind to the current node
        }

        for(int i=0;i<n;i++)
        {
            vector<int> ancestor;
            unordered_set<int> visited;
            childs(i,sol,visited); //Find all the children nodes of the current node amd put them inside visited

            for(int j = 0;j<n;j++)
            {
                if(j == i)  //If it is the same node, dont add it into the vector,proceed to next iteration
                    continue;
                if(visited.find(j)!=visited.end()) //If the node was visited at one point, add it to ancestors
                    ancestor.push_back(j);  
            }
            ans.push_back(ancestor); //Push bacl the ancestors of that node into the 2d vector
        }


        return ans;
    }

    void childs(int i,vector<vector<int>>&sol,unordered_set<int>& visited)
    {
        visited.insert(i);   //INserting the current element to the set as it has been visited

        for(int k : sol[i]) //traversing elements of the vector inside the 1st vector
        {
            if(visited.find(k) == visited.end()) //if it has not been visited
                childs(k,sol,visited);   //Recursively go thru it again
        }
    }
};
