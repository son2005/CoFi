// https://codefights.com/interview/7TyXopDTvYArEDA7u
int arrayMaxConsecutiveSum2(std::vector<int> a) {
    int curMax = a[0];
    int max = a[0];
    int n = a.size();
    for(int i = 1; i < n; i++) {
        curMax = std::max(a[i], curMax + a[i]);
        max = std::max(max, curMax);
    }

    return max;
}
