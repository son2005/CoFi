// https://codefights.com/arcade/code-arcade/list-forest-edge/vPJB7T28fyCeh2Ljn
std::vector<int> removeArrayPart(std::vector<int> a, int l, int r) {
    int n = a.size();
    vector<int> res;
    for(int i = 0; i < n; i++) {
        if(i >= l && i <= r) continue;
        res.push_back(a[i]);
    }
    return res;
}
