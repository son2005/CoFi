// https://codefights.com/arcade/code-arcade/intro-gates/mZAucMXhNMmT7JWta
int phoneCall(int min1, int min2_10, int min11, int s) {
    if((s -= min1) < 0) return 0;
    else if((s - min2_10 * 9) < 0) return 1 + s / min2_10;
    return 1 + 9 + (s - min2_10 * 9) / min11;
}
