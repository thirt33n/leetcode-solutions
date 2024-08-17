class MedianFinder {
public:

    vector<int> storer;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       if(storer.empty())
        storer.push_back(num);
       else
        {
            storer.insert(lower_bound(storer.begin(),storer.end(),num),num);
        }
    }
    
    double findMedian() {
            int n = storer.size();

            if(n%2 == 0)
                return double((storer[n/2]+storer[(n/2)-1]))/2;
            else
                return storer[n/2];
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */