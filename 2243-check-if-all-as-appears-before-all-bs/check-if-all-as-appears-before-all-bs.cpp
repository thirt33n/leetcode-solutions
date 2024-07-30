class Solution {
public:
    bool checkString(string s) {
        vector<int> apos;
        vector<int> bpos;
        int index = 0;
        for(char c:s)
        {
            if(c == 'a')
                apos.push_back(index);
            else if(c == 'b')
                bpos.push_back(index);
            index++;
        }

        if(apos.empty() || bpos.empty())
            return true;
        int lastApos = *max_element(apos.begin(),apos.end());
        int firstBpos = *min_element(bpos.begin(),bpos.end());

        return lastApos<firstBpos;
    }
};