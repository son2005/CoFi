// https://codefights.com/arcade/intro/level-5/5xPitc3yT3dqS7XkP
bool sumAllAround(int r, int c, vector<vector<int>> a, int &avg) {
    int maxRow = a.size();
    int maxCol = a[0].size();

    if(r == 0 || r == maxRow - 1 || c == 0 || c == maxCol - 1)
        return false;

    // Directions
    vector<pair<int, int>> ds;
    ds.push_back(make_pair(-1,1));
    ds.push_back(make_pair(-1,0));
    ds.push_back(make_pair(-1,-1));
    ds.push_back(make_pair(0,1));
    ds.push_back(make_pair(0,0));
    ds.push_back(make_pair(0,-1));
    ds.push_back(make_pair(1,1));
    ds.push_back(make_pair(1,0));
    ds.push_back(make_pair(1,-1));

    int sum = 0;
    for(int i = 0; i < ds.size(); i++) {
        int row = r + ds[i].first;
        int col = c + ds[i].second;
        if(row < 0 && row >= maxRow || col < 0 && col >= maxCol) {
            return false;
        }
        sum += a[row][col];
    }

    avg = sum / 9;
    return true;
}
std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> a) {
    int maxRow = a.size();
    int maxCol = a[0].size();
    int avg = 0;
    vector<vector<int>>res;
    for(int r = 1; r < maxRow - 1; r++) {
        res.push_back(vector<int>());
        for(int c = 1; c < maxCol - 1; c++) {
            if(sumAllAround(r,c,a,avg)) {
                res[r-1].push_back(avg);
            }
        }
    }
    return res;
}
