// https://codefights.com/interview/TRLjZhHWBTncyEGXc
std::vector<std::string> composeRanges(std::vector<int> a) {
    int i = 0, n = a.size();
    if(n==1) return vector<string>{to_string(a[0])};
    int start = i, end = i;
    vector<string> res;
    while(i < n) {
        if(a[i] + 1 != a[i+1]) {
            if(a[start] == a[end])
                res.push_back(to_string(a[start]));
            else
                res.push_back(to_string(a[start]) + "->" + to_string(a[end]));
            start = i + 1;
        }
        end = ++i;
    }
    return res;
}
