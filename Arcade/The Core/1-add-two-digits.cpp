// https://codefights.com/arcade/code-arcade/intro-gates/wAGdN6FMPkx7WBq66
int addTwoDigits(int n) {
    string s = std::to_string(n);
    return s[0] - '0' + s[1] - '0';
}
