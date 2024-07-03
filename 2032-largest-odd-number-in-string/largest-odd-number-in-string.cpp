class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string sol;
        int oddIndex = -1;
        for(int i = n-1;i>=0;i--)
        {
            if((num[i]-'0')%2==1)
            {
                oddIndex = i;
                break;
            }
        }
        cout<<oddIndex;
        if(oddIndex==-1)
            return "";
        for(int i=0;i<=oddIndex;i++)
        sol+=num[i];

        return sol;
    }
};