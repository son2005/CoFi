// https://codefights.com/arcade/intro/level-2/bq2XnSr5kbHqpHGJC
int makeArrayConsecutive2(std::vector<int> a) {
    sort(a.begin(), a.end());
    vector<int> res;
    int n = a.size();
    int end = a[n-1];
    int start = a[0];
    while(start <= end) {
        res.push_back(start++);
    }
    return res.size() - a.size();
}
