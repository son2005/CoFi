// https://codefights.com/interview/xfpK5NtkLaoYEPLCT
int reverseInteger(int x) {
    int sign = (x < 0) ? -1 : 1;
    x = abs(x);
    string str = std::to_string(x);
    reverse(str.begin(), str.end());

    int result = atoi(str.c_str()) * sign;
    return result;
}
