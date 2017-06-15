// https://codefights.com/interview/t8iNoBtDf5XSiwHiF
int missingNumber(std::vector<int> a) {
    int n = a.size();
    int r = 0;
    if(n == 0) return r;
    if(n == 1 && a[0] == 0) return 1;

    sort(a.begin(), a.end());
    for(int i = 1; i < n; i++) {
        if(a[i-1] + 1 != a[i]) {
            r = a[i] - 1;
            if(r == a[i-1]) r = a[0] - 1;
            if(r < 0) r = a[n-1] + 1;
            return r;
        }
        else if(a[i-1] + 1 == a[i] && i == n-1) {
            if(a[0] - 1 < 0) return a[n-1] + 1;
            else return a[0] - 1;
        }
    }

    return r;
}
