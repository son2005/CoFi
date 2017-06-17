// https://codefights.com/interview/XPZ2BjPnFiwpKBurb
std::string columnTitle(int num) {
    string str = "";
    while(num > 0) {
        num--;
        str = string{num%26+'A'} + str;
        num/=26;
    }
    return str;
}
