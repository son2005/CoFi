// https://codefights.com/arcade/intro/level-2/2mxbGwLzvkTCKAJMG
bool isSorted(vector<int>a) {
    int n = a.size();
    for(int i = 1; i < n; i++) {
        if(a[i-1] >= a[i]) return false;
    }
    return true;
}
bool almostIncreasingSequence(std::vector<int> sequence) {
    int n = sequence.size();
    if(n==2) return sequence[0] > sequence[1] ? false : true;
    // Check first
    vector<int> a, b;
    a = sequence;
    a.erase(a.begin());
    if(isSorted(a)) return true;

    // Check last
    a = sequence;
    a.erase(a.end()-1);
    if(isSorted(a)) return true;

    a = sequence;
    int counter = 0;
    for(int i = 1; i < n - 1; i++) {
        // [0, -2, 5, 6] -> i:-2, try to remove -2
        bool cond1 = a[i] < a[i-1];
        // [1, 2, 3, 4, 99, 5, 6] -> i: 99, try to remove 99
        bool cond2 = a[i] > a[i+1] && a[i+1] > a[i-1];
        if(cond1 || cond2) {
            b = a;
            b.erase(b.begin() + i);
            if(isSorted(b)) return true;
        }
    }
    return false;
}
