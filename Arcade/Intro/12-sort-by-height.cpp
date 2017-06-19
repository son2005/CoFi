// https://codefights.com/arcade/intro/level-3/D6qmdBL2NYz49XHwM
std::vector<int> sortByHeight(std::vector<int> a) {
    vector<int> aa = a;
    sort(aa.begin(), aa.end());
    int n = a.size();
    int index = n - 1;
    for(int i = n - 1; i >= 0; --i) {
        if(a[i] == -1) continue;
        a[i] = aa[index--];
    }
    return a;
}
