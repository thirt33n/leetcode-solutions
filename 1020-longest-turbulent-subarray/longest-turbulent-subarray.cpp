class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int l = 0,r =1;
        int counter = 1;
        string prev = "";
        
        while(r<arr.size())
        {
            if(arr[r-1]>arr[r] && prev!=">")
            {
                counter = max(counter,r-l+1);
                r++;
                prev = ">";
            }
            else if(arr[r-1]<arr[r] && prev!="<")
            {
                counter = max(counter,r-l+1);
                r++;
                prev = "<";
            }
            else{
                if(arr[r-1] == arr[r])
                    r++;
                l = r-1;
                prev = "";
                
            }
           
        }
         return counter;

    }
};

auto init = []() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
