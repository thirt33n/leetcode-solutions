class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses,0);
        queue<int> bfs;
        for(vector<int> pre:prerequisites) //creating adjaceny list
        {
            adj[pre[1]].push_back(pre[0]); // 1 depends on 0
            indegree[pre[0]]++; //creating indegrees
        }

        for(int i=0;i<numCourses;i++) //for each course
        {
            if(!indegree[i]) //If indegree==0
                bfs.push(i); //add to bfs 
        }


        int counter =0;
        while(!bfs.empty())
        {
            int course = bfs.front();
            bfs.pop();
            counter++;

            for(int i:adj[course])
            {
                if(--indegree[i] == 0)
                    bfs.push(i);
            }
        }

        return counter==numCourses; //if bfs is same as no of courses then true;
    }
};