class Solution {
public:
    string makeSmallestPalindrome(string s) {
        
        int i = 0,j=s.size()-1;

        while(i<j)
        {
            if(s[i]!=s[j])
            {
                char temp = min(s[i],s[j]);
                if(s[i]!=temp)
                    s[i] = temp;
                else
                    s[j] = temp;
            }
            i++;
            j--;
        }

        return s;

    }
};