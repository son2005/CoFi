// https://codefights.com/arcade/intro/level-11/pwRLrkrNpnsbgMndb
bool isValid(int cell) {
    return cell >= 0 && cell < 8;
}
int chessKnight(std::string cell) {
    int row = cell[0] - 'a';
    int col = cell[1] - '1';
    int counter = 0;
    // Left
    if(isValid(col-2)) {
        if(isValid(row+1)) counter++;
        if(isValid(row-1)) counter++;
    }
    // Right
    if(isValid(col+2)) {
        if(isValid(row+1)) counter++;
        if(isValid(row-1)) counter++;
    }
    // Top
    if(isValid(row+2)) {
        if(isValid(col+1)) counter++;
        if(isValid(col-1)) counter++;
    }
    // Down
    if(isValid(row-2)) {
        if(isValid(col+1)) counter++;
        if(isValid(col-1)) counter++;
    }
    return counter;
}
