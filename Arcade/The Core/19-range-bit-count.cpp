// https://codefights.com/arcade/code-arcade/intro-gates/eC2Zxu5H5SnuKxvPT
int countBit(int n) {
    int counter(0);
    do {
        counter += n & 1;
        n >>= 1;
    } while(n);
    return counter;
}
int rangeBitCount(int a, int b) {
    int res(0);
    for(int i = a; i <= b; i++)
//        res += bitset<4>(i).count();
        res += countBit(i);
    return res;
}
