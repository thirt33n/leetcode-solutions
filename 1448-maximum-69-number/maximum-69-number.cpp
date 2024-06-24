class Solution {
public:
    int maximum69Number (int num) {
        string nString = to_string(num);

        for(int i=0;i<nString.size();i++)
        {
            if(nString[i] == '6')
            {
                nString[i] = '9';
                break;
            }
        }

        
        return stoi(nString);
    }
};