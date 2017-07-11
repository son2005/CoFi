// https://codefights.com/arcade/code-arcade/intro-gates/7BFPq6TpsNjzgcpXy
int leastFactorial(int n) {
    int f = 1,
        c = 1;
    while(f < n) f *= ++c;
    return f;
}
