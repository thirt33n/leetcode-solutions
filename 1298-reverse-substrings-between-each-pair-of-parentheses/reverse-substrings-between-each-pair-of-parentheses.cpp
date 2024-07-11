class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> openbraks;
        string sol;
        int n = s.size();
        vector<int> revIndices(n);

        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
                openbraks.push(i);
            else if(s[i] == ')')
            {
                int temp = openbraks.top();
                revIndices[i] = temp;
                revIndices[temp] = i;
                openbraks.pop();
            }
        }

        for(int cur=0,dir = 1;cur<n;cur+=dir)
        {
            if(s[cur] == '(' || s[cur] == ')')
            {
                cur = revIndices[cur];
                dir*=-1;
            }
            else
            {
                sol+=s[cur];
            }
        }
        return sol;
    }
};