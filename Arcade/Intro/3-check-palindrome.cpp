// https://codefights.com/arcade/intro/level-1/s5PbmwxfECC52PWyQ
bool checkPalindrome(std::string inputString) {
    string a = inputString;
    std::reverse(a.begin(), a.end());
    return a == inputString;
}
