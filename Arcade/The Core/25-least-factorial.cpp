// https://codefights.com/arcade/code-arcade/loop-tunnel/7BFPq6TpsNjzgcpXy
int leastFactorial(int n) {
    int f = 1,
        c = 1;
    while(f < n) f *= ++c;
    return f;
}
