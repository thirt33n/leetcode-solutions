class Solution {
public:

    bool place(vector<int>& position,int m,int mid)
    {
        int pre = position[0]; // ball at first spot
        int placeBall = 1;
        int i=1;
        while(i<position.size()&&placeBall<m)
        {
            int cur = position[i];
            if(cur - pre>=mid)
            {
                placeBall++;
                pre = cur;
            }
            i++;
        }

        return placeBall == m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();

        int counter = 0;

        int start = 1;
        int end = (position[n-1]/(m-1));

        while(start<=end)
        {
            int mid = (start+end)/2;
            if(place(position,m,mid))
            {   counter = mid;
                start = mid+1;
            }
            else
                end = mid-1;

        }
        return counter;
    }
};