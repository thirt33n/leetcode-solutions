class Solution {
public:
    bool checkString(string s) {
        bool bfinder = false;
        // if(s[0] == 'b')
        //     return false;
        
        for(char c:s)
        {
            if(bfinder &&c == 'a')
                return false;
            else if(!bfinder && c == 'b')
                bfinder = true;
        }
        return true;

    }
};