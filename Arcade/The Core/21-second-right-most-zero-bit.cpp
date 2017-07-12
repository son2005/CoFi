// https://codefights.com/arcade/code-arcade/corner-of-0s-and-1s/9nSj6DgqLDsBePJha
int secondRightmostZeroBit(int n) {
  return ~n & ((n|(n+1))+1);
}
