// https://codefights.com/arcade/intro/level-2/xskq4ZxLyqQMCLshr
int matrixElementsSum(std::vector<std::vector<int>> a) {
    int n = a.size();
    vector<int> haunted(n, 0);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < a[i].size(); j++) {
            if(haunted[j]) continue;
            if (!a[i][j]) haunted[j] = 1;
            sum += a[i][j];
        }
    }
    return sum;
}
