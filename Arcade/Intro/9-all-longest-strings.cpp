// https://codefights.com/arcade/intro/level-3/fzsCQGYbxaEcTr2bL
std::vector<std::string> allLongestStrings(std::vector<std::string> a) {
    vector<vector<string>> b(10, vector<string>());
    int n = a.size();
    int maxLen = 0;
    for(int i = 0; i < n; i++) {
        int len = a[i].length();
        if(len > maxLen) maxLen = len;
        b[len].push_back(a[i]);
    }

    return b[maxLen];
}
