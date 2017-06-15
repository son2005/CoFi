// https://codefights.com/interview/eLcCSQkH9Bd7A6Mep
int findNextLarge(std::vector<int> a, int index) {
    int n = a.size();
    int num = -1;
    for(int i = index + 1; i < n; i++) {
        if(a[i] > a[index]) return a[i];
    }
    return num;
}
std::vector<int> nextLarger(std::vector<int> a) {
    int n = a.size();
    vector<int> result(n, -1);
    int max = 0;
    for(int i = 0; i < n; i++) {
        int next = findNextLarge(a, i);
        result[i] = next;
    }
    return result;
}
