// https://codefights.com/arcade/intro/level-5/EEJxjQ7oo7C5wAGjE
int arrayMaximalAdjacentDifference(std::vector<int> a) {
    int n = a.size();
    int maxD = 0, l, r;
    for(int i = 1; i < n - 1; i++) {
        l = std::abs(a[i] - a[i-1]);
        r = std::abs(a[i] - a[i+1]);
        maxD = std::max(maxD, std::max(l, r));
    }
    return maxD;
}
