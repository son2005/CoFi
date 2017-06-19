// https://codefights.com/arcade/intro/level-1/egbueTZRRL5Mm4TXN
int centuryFromYear(int year) {
    int plus = 0;
    if (year % 100 != 0) plus = 1;
    return year / 100 + plus;
}
