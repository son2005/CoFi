// https://codefights.com/arcade/intro/level-3/3o6QFqgYSontKsyk4
std::pair<int, int> getParenthesePos(string s) {
    pair<int, int> tmp(string::npos, string::npos);
    auto found1 = s.find(")");
    if(found1 != string::npos) {
        auto found2 = s.rfind("(", found1);
        if(found2 != string::npos) {
            return make_pair(found2, found1);
        }
    }
    return tmp;
}
std::string reverseParentheses(std::string s) {
    pair<int, int> p;
    string f, m, l;
    p = getParenthesePos(s);
    while(p.first != string::npos) {
        f = s.substr(0, p.first);
        m = s.substr(p.first + 1, p.second - p.first - 1);
        l = s.substr(p.second + 1);
        s = f + m.assign(m.rbegin(), m.rend()) + l;
        p = getParenthesePos(s);
    }
    return s;
}
