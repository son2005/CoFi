// https://codefights.com/arcade/code-arcade/loop-tunnel/8rqs3BLpdKePhouQM/description
int lineUp(std::string commands) {
    unordered_map<char, double> m;
    m['L'] = m['R'] = .5;
    m['A'] = 1;
    double sum = 0;
    int res = 0;
    for(auto&&c:commands) {
        sum += m[c];
        if((int)sum == sum) res++;
    }
    return res;
}
