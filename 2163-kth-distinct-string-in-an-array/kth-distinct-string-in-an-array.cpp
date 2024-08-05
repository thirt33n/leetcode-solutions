class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mapper;
        for(int i=0;i<arr.size();i++)
        {
           mapper[arr[i]]++;
        }

        int kk = 1;
        
        string ch="";
        for(string str:arr)
        {
            
            if(mapper[str] == 1)
            {
                if(kk == k)
                    { ch = str; break;}
                else
                    kk++;
            }
        }
        return ch;
    }
};