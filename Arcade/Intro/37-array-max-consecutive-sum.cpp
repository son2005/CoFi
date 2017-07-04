// https://codefights.com/arcade/intro/level-8/Rqvw3daffNE7sT7d5
int arrayMaxConsecutiveSum(std::vector<int> a, int k) {
    if(k==1) return *std::max_element(a.begin(), a.end());
    int n = a.size();
    int leftSum = std::accumulate(a.begin(), a.begin() + k, 0);
    int maxSum = leftSum;
    for(int start = 0, end = k; end < n; start++, end++) {
        leftSum = leftSum - a[start] + a[end];
        maxSum = std::max(maxSum, leftSum);
    }
    return maxSum;
}
