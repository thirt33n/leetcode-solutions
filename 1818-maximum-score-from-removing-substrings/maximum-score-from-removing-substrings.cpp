class Solution {
public:
    int maximumGain(string s, int x, int y) {
        if(x<y)
        {
            swap(x,y);
            reverse(s.begin(),s.end());
        }
        int a = 0,b=0,score = 0;

        for(char c:s)
        {
            if(c == 'a')
                a++;
            else if(c == 'b')
            {
                if(a>0)
                {
                    a--;
                    score+=x;
                }
                else
                    b++;
            }
            else
            {
                score+=min(a,b)*y;
                a=0;
                b=0;
            }
        }
        score+=min(a,b)*y;
        return score;
    }
};