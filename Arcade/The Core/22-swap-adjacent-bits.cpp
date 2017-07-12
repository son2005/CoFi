// https://codefights.com/arcade/code-arcade/corner-of-0s-and-1s/dShYZZT4WmvpmfpgB
int swapAdjacentBits(int n) {
  return ((n & 0xAAAAAAAA) >> 1) | ((n & 0x55555555) << 1);
}
// int process(int n) {
//   string res, tmp = bitset<32>(n).to_string();
//   for(int i = 0; i < tmp.size(); i+=2)
//     res += string{tmp[i+1]} + string{tmp[i]};
//   return stoi(res,0,2);
// }
