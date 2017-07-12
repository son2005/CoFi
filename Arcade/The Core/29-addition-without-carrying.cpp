// https://codefights.com/arcade/code-arcade/loop-tunnel/xzeZqCQjpfDJuN72S/description
int additionWithoutCarrying(int param1, int param2) {
    int res = 0, mul = 1;
    while(param1 + param2) {
        res += ((param1 % 10 + param2 % 10) % 10 ) * mul;
        mul *= 10; param1 /= 10; param2 /= 10;
    }
    return res;
}
