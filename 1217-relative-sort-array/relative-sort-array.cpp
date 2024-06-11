class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
               unordered_map<int, int> locs;

        for (int i = 0; i < arr2.size(); i++) {
            locs[arr2[i]] = i;
        }

        sort(arr1.begin(), arr1.end(), [&locs](const int &a, const int &b) {
            if (locs.find(a) != locs.end() && locs.find(b) != locs.end()) {
                return locs[a] < locs[b];
            } else if (locs.find(a) != locs.end()) {
                return true;
            } else if (locs.find(b) != locs.end()) {
                return false;
            } else {
                return a<b;
            }
        });

        return arr1;
    }
};

