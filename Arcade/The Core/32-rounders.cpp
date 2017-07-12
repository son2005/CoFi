// https://codefights.com/arcade/code-arcade/loop-tunnel/H5PP5MXvYvWXxTytH
int rounders(int value) {
    int mul = 1, carry = 0;
    while(value >= 10) {
        carry = (value % 10 >= 5) ? 1 : 0;
        mul *= 10; value = value / 10 + carry;
    }
    return value * mul;
}
