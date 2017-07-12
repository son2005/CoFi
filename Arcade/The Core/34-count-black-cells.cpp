// https://codefights.com/arcade/code-arcade/loop-tunnel/RcK4vupi8sFhakjnh
int countBlackCells(int n, int m) {
    return n + m - 2 + gcd(n, m);
}

int gcd(int n, int m) {
    return n == 0 ? m : gcd(m % n, n);
}
