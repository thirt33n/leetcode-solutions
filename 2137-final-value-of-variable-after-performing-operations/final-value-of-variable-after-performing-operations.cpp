class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sol = 0;
        for(string s:operations)
        {
            if(s[0] == '-' || s[2] == '-')
                sol--;
            else
                sol++;
        }
        return sol;
    }
};