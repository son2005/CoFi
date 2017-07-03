// https://codefights.com/arcade/intro/level-7/8PxjMSncp9ApA4DAb
int depositProfit(float deposit, int rate, int threshold) {
    int counter = 0;
    float r = 1 + rate * 1.f / 100;
    while(deposit < threshold) {
        counter++;
        deposit *= r;
    }
    return counter;
}
