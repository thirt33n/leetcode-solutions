class Solution {
public:
    int findTheWinner(int n, int k) {
        // unordered_map<int,bool> removed;
        unordered_set<int> removed;
        vector<int> rounds;
        int cur = 1;
        while(removed.size()<n-1)
        {
            int counter =0;
            while(counter<k)
            {

                    if(!removed.contains(cur))
                    {    
                        rounds.push_back(cur);
                         counter++;
                    }
                    cur = (cur%n)+1;
                
            }
            removed.insert(rounds.back());
            rounds.clear();

            // cur = (cur%n)+1;
            while(removed.contains(cur))
                cur = (cur%n)+1;
            
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(!removed.contains(i))    
                ans = i;
        }

        return ans;

    }
};