// https://codefights.com/arcade/intro/level-8/rRGGbTtwZe2mA8Wov
char firstDigit(std::string s) {
    for(auto &&c:s) {
        if(isdigit(c)) return c;
    }
}
