class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        bool mod = true;
        int len = s.size();
        int seconds = 0;
        while(mod)
        {
            mod = false;
            int i = 0,j=i+1;
            while(j<len)
            {
                if(s[i] == '0' && s[j] == '1')
                {
                    swap(s[i],s[j]);
                    // if(j==len-1)
                    //     break;
                    i = j+1;
                    j=i+1;
                    mod = true;
                }
                else{
                    i++;
                    j++;
                }
            
            }
            seconds+=mod;
        }

        return seconds;
    }
};