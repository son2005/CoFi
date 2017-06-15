// https://codefights.com/interview/2szSXxzqWuAJKProX
bool checkDup(std::vector<int> arrTemp) {
    if(arrTemp.empty()) return false;
    std::sort(arrTemp.begin(), arrTemp.end());
    bool containDup = (std::unique(arrTemp.begin(), arrTemp.end())) != arrTemp.end();
    return containDup;
}

bool sudoku2(std::vector<std::vector<char>> grid) {
    std::vector<int> arrTemp;
    // Check ver
    for(int j = 0; j < 9; j++) {
        arrTemp.clear();
        for(int i = 0; i < 9; i++) {
            if(grid[i][j] == '.') continue;
            else {
                arrTemp.push_back((int)grid[i][j]);
            }
        }
        if(checkDup(arrTemp)) return false;
    }

    // Check hor
    for(int i = 0; i < 9; i++) {
        arrTemp.clear();
        for(int j = 0; j < 9; j++) {
            if(grid[i][j] == '.') continue;
            else {
                arrTemp.push_back((int)grid[i][j]);
            }
        }
        if(checkDup(arrTemp)) return false;
    }

    // Check 3x3
    std::vector<std::vector<int>> arrTemp2;
    for(int i = 0; i < 3; i++){
        arrTemp2.push_back(std::vector<int>());
    }

    int max = 3;
    int count = 0;
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            if(grid[i][j] == '.') continue;
            else {
                int index = j / max;
                arrTemp2[index].push_back((int)grid[i][j]);
            }
        }
        if(++count == max) {
            count = 0;
            for(auto &arrTempChild : arrTemp2) {
                if(checkDup(arrTempChild)) return false;
                arrTempChild.clear();
            }
        }
    }
    return true;
}
