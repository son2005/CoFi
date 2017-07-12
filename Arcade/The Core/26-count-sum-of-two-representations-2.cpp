// https://codefights.com/arcade/code-arcade/loop-tunnel/hBw5BJiZ4LmXcy92u
int countSumOfTwoRepresentations2(int n, int l, int r) {
    if (2*l > n) return 0;
    return (n / 2 - max(l, n-r)) + 1;
}
