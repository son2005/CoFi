// https://codefights.com/arcade/code-arcade/intro-gates/aiKck9MwwAKyF8D4L
int lateRide(int n) {
    int hours = n / 60 % 24;
    int minutes = n % 60;
    return hours / 10 + hours % 10 + minutes / 10 + minutes % 10;
}
