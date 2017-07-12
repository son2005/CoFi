// https://codefights.com/arcade/code-arcade/labyrinth-of-nested-loops/MvX84CA5HN6GKqv7R
int squareSum(int n) {
    int sum = 0;
    while(n) {
        int mod = n % 10;
        sum += mod * mod;
        n/=10;
    }
    return sum;
}
int squareDigitsSequence(int a0) {
    set<int> s;
    int counter = 1;
    do {
        if(s.insert(a0).second == false)
            return counter;
    } while( (a0 = squareSum(a0)) && ++counter);
    return counter;
}
