class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mapper1;
        unordered_map<string,char> mapper2;

        istringstream stream(s);
        string word;
        vector<string> words;

        while(stream>>word)
            words.push_back(word);
       
        if(words.size()!=pattern.size())
            return false;

        for(int i=0;i<pattern.size();i++)
        {
           if(mapper1.find(pattern[i])!=mapper1.end())
           {
            if(mapper1[pattern[i]]!=words[i])
                return false;
           }
           else
            mapper1[pattern[i]] = words[i];

           if(mapper2.find(words[i])!=mapper2.end())
           {
                if(mapper2[words[i]]!=pattern[i])
                    return false;
           }
           else
            mapper2[words[i]] = pattern[i];
        }
        return true;
    }
};