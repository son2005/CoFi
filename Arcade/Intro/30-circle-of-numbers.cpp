// https://codefights.com/arcade/intro/level-7/vExYvcGnFsEYSt8nQ
int circleOfNumbers(int n, int firstNumber) {
    int jump = n / 2;
    int nextNumber = firstNumber + jump;
    if(nextNumber >= n) {
        return nextNumber - n;
    }
    return nextNumber;
}
