// https://codefights.com/arcade/code-arcade/corner-of-0s-and-1s/6SLJChm9N3fEgr2R7
int equalPairOfBits(int n, int m) {
  return n ^= m, (n+1) & ~n;
}
