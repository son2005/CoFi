// https://codefights.com/arcade/code-arcade/intro-gates/9nSj6DgqLDsBePJha
int secondRightmostZeroBit(int n) {
  return ~n & ((n|(n+1))+1);
}
