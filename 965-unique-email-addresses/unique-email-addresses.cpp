class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> uniqEmails;

        for(string email:emails)
        {
            string local = "";
            string domain = "";
            int leng = email.size();
            int i = 0,j = leng-1;

            while(email[i]!='@')
            {
                if(email[i] == '.')
                  {i++;  continue;}
                else if(email[i] == '+')
                    break;
                else
                    local+=email[i];
                i++;
            }

            while(email[j]!='@')
            {
                domain+=email[j];
                j--;
            }
            reverse(domain.begin(),domain.end());
            uniqEmails.insert(local+'@'+domain);
            // cout<<local<<" ";
        }
        return uniqEmails.size();

    }
};