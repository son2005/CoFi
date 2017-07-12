// https://codefights.com/arcade/code-arcade/corner-of-0s-and-1s/whz5JzszYTdXW6aNA
int differentRightmostBit(int n, int m) {
  return (m&1) != (n&1) ? 1 : 2 * differentRightmostBit(n>>1, m>>1);
}
