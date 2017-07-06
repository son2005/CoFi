// https://codefights.com/arcade/intro/level-12/tQgasP8b62JBeirMS
using vp = vector<pair<int,int>>;
vp getAllDirs(int r, int c) {
    vp a = {
        pair(r-1, c-1),
        pair(r-1, c),
        pair(r-1, c+1),
        pair(r, c-1),
        pair(r, c),
        pair(r, c+1),
        pair(r+1, c-1),
        pair(r+1, c),
        pair(r+1, c+1)
    };
    return a;
}
bool sudoku(std::vector<std::vector<int>> grid) {
    int startRow = 1, startCol = 1;
    int m = grid.size(), n = grid[0].size();
    set<int> aUniq, aUniq1;
    // Check 3x3 sub grids
    for(; startRow < m; startRow += 3) {
        for(startCol = 1; startCol < n; startCol += 3) {
            vp arr = getAllDirs(startRow, startCol);
            for(auto pos:arr)
                if(!aUniq.insert(grid[pos.first][pos.second]).second) return false;
            aUniq.clear();
        }
    }
    // Check hor & ver
    startRow = startCol = 0;
    while(startRow < m && startCol < n) {
        aUniq.clear(); aUniq1.clear();
        for(int pos = 0; pos < n; pos++)
            if(!aUniq.insert(grid[startRow][pos]).second ||
                !aUniq1.insert(grid[pos][startCol]).second)
               return false;
        startRow++;startCol++;
    }
    return true;
}
