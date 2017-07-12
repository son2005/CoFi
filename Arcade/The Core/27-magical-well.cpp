// https://codefights.com/arcade/code-arcade/loop-tunnel/LbuWRHnMoJH9SAo4o
int magicalWell(int a, int b, int n) {
    if(!n) return 0;
    return a*b + magicalWell(++a, ++b, --n);
}
