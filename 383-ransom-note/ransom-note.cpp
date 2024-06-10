class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> notMap;
        map<char,int> mag;

        for(char c:ransomNote)
            notMap[c]++;
        
        for(char c:magazine)
            mag[c]++;


        for(auto pair: notMap)
        {
            if(mag.find(pair.first)!=mag.end())
            {
                if(pair.second <= mag[pair.first])
                    continue;
                else
                    return false;
            }
            else
                return false;
        }
        return true;
    }
};