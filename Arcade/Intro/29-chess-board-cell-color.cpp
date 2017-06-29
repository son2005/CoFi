// https://codefights.com/arcade/intro/level-6/t97bpjfrMDZH8GJhi
bool chessBoardCellColor(std::string cell1, std::string cell2) {
    vector<int> m(64, 0);
    int v = 1;
    for(int i = 1; i <= 64; i++) {
        m[i-1] = v;
        if(i%8) v++;
        // cout << m[i-1] << " ";
        // if(!(i%8)) cout << endl;
    }

    int index1 = (cell1[0] - 'A') * 8 + (cell1[1] - '0') - 1;
    int index2 = (cell2[0] - 'A') * 8 + (cell2[1] - '0') - 1;
    return (m[index1] % 2 == m[index2] % 2);
}
