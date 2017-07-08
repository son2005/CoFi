// https://codefights.com/arcade/code-arcade/intro-gates/aFF9HDm2Rsti9j5kc
bool isInfiniteProcess(int a, int b) {
    // Method 1
    // while(a != b && b != 0) {
    //     a++;b--;
    // }
    // return a!=b ? 1 : 0;

    // Method 2
    if(a > b || b - a & 1) return 1;
    return 0;

    // Method 3: recursive
    // if(a!=b && b==0) return 1;
    // if(a==b) return 0;
    // return isInfiniteProcess(a+1,b-1);
}
