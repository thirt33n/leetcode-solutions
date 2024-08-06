class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mapper1;
        for(char c:word) //Frequency of each character
            mapper1[c]++;
        vector<pair<char,int>> user;
        
        for(auto& pair:mapper1)
            user.push_back(pair);
        
        sort(user.begin(),user.end(),[](pair<char,int> a,pair<char,int>b){
            return a.second > b.second;
        });

        int cc = 0;
        int tot = 1;

        int summer = 0;

        for(auto press:user)
        {
            cc= (tot-1)/8;       
            cout<<tot<<" "<<(cc+1)<<" "<<press.second<<" ";
            summer+=press.second*(cc+1);
            cout<<summer<<endl;
            tot++;
        }

        return summer;
        
        
    }
};