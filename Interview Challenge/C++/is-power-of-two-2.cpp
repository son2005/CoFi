// https://codefights.com/interview/jMByebMMaF8nLgf8s
bool isPowerOfTwo2(long long n) {
    if (n == 0) return false;
    return (n & (n-1)) == 0 ? true : false;
}
