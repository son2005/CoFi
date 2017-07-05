// https://codefights.com/arcade/intro/level-12/fQpfgxiY6aGiGHLtv
int differentSquares(std::vector<std::vector<int>> matrix) {
    int maxR = matrix.size();
    int maxC = matrix[0].size();
    auto isValid = [maxR, maxC](int r, int c){
        return r >= 0 && r < maxR && c >= 0 && c < maxC;
    };

    set<string> s;
    for(int r = 0; r < maxR - 1; r++) {
        for(int c = 0; c < maxC - 1; c++) {
            if(isValid(r, c+1) && isValid(r+1, c) && isValid(r+1, c+1)) {
                s.insert(std::to_string(matrix[r][c]) +
                    std::to_string(matrix[r][c+1]) +
                    std::to_string(matrix[r+1][c]) +
                    std::to_string(matrix[r+1][c+1]));
            }
        }
    }
    return s.size();
}
