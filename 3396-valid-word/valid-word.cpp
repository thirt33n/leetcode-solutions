class Solution {
public:
    bool isValid(string word) {

        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        
        int vow = 0;
        int cons = 0;

        if(word.size()<3)
            return false;
        transform(word.begin(), word.end(), word.begin(), [](unsigned char c){ return tolower(c); });
        for(char c : word)
        {
            if(!isalnum(c))
                return false;
            if(vowels.contains(c))
                vow++;
            else if(!isdigit(c))
                cons++;
        }
        cout<<vow<<" "<<cons;
        if(vow<1 || cons < 1)
            return false;
        return true;
    }
};