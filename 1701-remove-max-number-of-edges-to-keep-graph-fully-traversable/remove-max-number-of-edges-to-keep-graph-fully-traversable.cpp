class Solution {
public:

    int finder(int a,vector<int>& parent)
    {
       if (parent[a] != a) 
        parent[a] = finder(parent[a], parent);
    
    return parent[a];
} 

    bool unioner(int i,int j,vector<int>&parent,vector<int>&rank)
    {
        int maxi = finder(i,parent);
        int maxj = finder(j,parent);

        if(maxi!=maxj)
        {
            if(rank[maxi]>rank[maxj])
                parent[maxj] = maxi;
            else if(rank[maxi]<rank[maxj])
                parent[maxi] = maxj;
            else
            {
                parent[maxi] = maxj;
                rank[maxj]++;
            }
            return true;
        }
        return false;
    }
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        //sorting based on descending order of edgetype:
        sort(edges.begin(),edges.end(),[](vector<int>& a,vector<int> &b){ return a[0]>b[0];});
        int k = n+1;
        vector<int> aliceParent(k),bobParent(k),aliceRank(k),bobRank(k);

        for(int i=1;i<=n;i++)
        {
            aliceParent[i]=i;
            bobParent[i] = i;
            aliceRank[i] = 1;
            bobRank[i] = 1;
        }
        int aliceConnections = n,bobConnections = n,sol =0;

        for(vector<int> edge:edges)
        {
            if(edge[0] == 3)
            {
                bool aliceMerger = unioner(edge[1],edge[2],aliceParent,aliceRank);
                bool bobMerger = unioner(edge[1],edge[2],bobParent,bobRank);

                if(aliceMerger)
                    aliceConnections--;
                if(bobMerger)
                    bobConnections--;
                
                if(!aliceMerger && !bobMerger)
                    sol++;
            }
            else if(edge[0] == 2)
            {
                bool bobMerger = unioner(edge[1],edge[2],bobParent,bobRank);

                if(bobMerger)
                    bobConnections--;
                else
                {
                    sol++;
                }
            }
            else
            {
                bool aliceMerger = unioner(edge[1],edge[2],aliceParent,aliceRank);

                if(aliceMerger)
                    aliceConnections--;
                else
                    sol++;
            }
            
        }
        if(aliceConnections!=1 || bobConnections!=1)
            return -1;
        return sol;
    }
};