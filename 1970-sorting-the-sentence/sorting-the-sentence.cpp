class Solution {
public:
    string sortSentence(string s) {
        vector<string> holder(9);

        istringstream iss(s);
        string temp;

        while(iss>>temp)
        {
            int idx = temp.back() - '0';
            temp.pop_back();
            holder[idx - 1] = temp; 

        }
 
        string res;
        for(string k:holder)
        {
            if(!k.empty())
                res+= k+" ";
        }
        res.pop_back();
        return res;
    }
};