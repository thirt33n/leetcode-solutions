class Solution {
public:
    int minOperations(vector<string>& logs) {
        int level=0;
        for(string i:logs)
        {
            int sizr = i.size();
            if(i == "../")
            {
                if(level == 0)
                    continue;
                else 
                    level--;
            }
            else if(i == "./")
                continue;
            else
                level++;
        }
        return level;
    }
};