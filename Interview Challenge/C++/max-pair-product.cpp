// https://codefights.com/interview/AeoqA9TH3CSk9HqkH
int maxPairProduct(std::vector<int> a) {
    int n = a.size();
    sort(a.begin(), a.end());
    vector<int>cnts(10000,0);
    for(auto i:a) cnts[i]++;
    for(int i = n-1; i >= 0; i--) {
        for(int j = 1; j*j <= a[i]; j++) if(cnts[j] && a[i] % j == 0) {
            int res = a[i] / j;
            if(res == j && cnts[j] > 1) return a[i];
            if(res != j && cnts[j] && cnts[res]) return a[i];
        }
    }
    return -1;
}
