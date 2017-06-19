// https://codefights.com/arcade/intro/level-4/ZCD7NQnED724bJtjN
std::vector<std::string> addBorder(std::vector<std::string> p) {
    int n = p.size();
    string border(p[0].size() + 2, '*');
    vector<string> res(n+2, border);
    for(int i = 0; i < n; i++) {
        res[i+1] = "*" + p[i] + "*";
    }
    return res;
}
