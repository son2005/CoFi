// https://codefights.com/arcade/intro/level-3/3AdBC97QNuhF6RwsQ
bool isLucky(int n) {
    string s = to_string(n);
    int m = s.size() / 2;
    int sumL = 0, sumR = 0;
    for(int i = 0; i < s.size(); i++) {
        int v = s[i] - '0';
        if(i < m) sumL += v;
        else sumR += v;
    }
    return sumL == sumR;
}
