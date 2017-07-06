// https://codefights.com/arcade/intro/level-12/uRWu6K8E7uLi3Qtvx
/*
 * 1  2  3  4
 * 12 13 14 5
 * 11 16 15 6
 * 10 9  8  7
*/
std::vector<std::vector<int>> spiralNumbers(int n) {
    vector<pair<int,int>> dirs;
    dirs.push_back(make_pair(0, 1));
    dirs.push_back(make_pair(1, 0));
    dirs.push_back(make_pair(0, -1));
    dirs.push_back(make_pair(-1, 0));
    vector<vector<int>>a(n, vector<int>(n, 0));
    auto isValid = [n, &a](int r, int c) {
        return r >= 0 && r < n && c >= 0 && c < n && !a[r][c];
    };
    int r = 0, c = 0;
    int counter = 1,
        index = 0,
        loop = n * n;

    while(loop--) {
        a[r][c] = counter++;
        if(!isValid(r + dirs[index].first, c + dirs[index].second))
            index = ++index % 4;
        r += dirs[index].first;
        c += dirs[index].second;
    }
    return a;
}
