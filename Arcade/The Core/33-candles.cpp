// https://codefights.com/arcade/code-arcade/loop-tunnel/LAKReA3CR9EwkZGSz
int candles(int candlesNumber, int makeNew) {
    int counter = 0, leftOvers = 0;
    while(candlesNumber) {
        counter += candlesNumber;
        leftOvers += candlesNumber;
        candlesNumber = leftOvers / makeNew;
        leftOvers = leftOvers % makeNew;
    }
    return counter;
}
