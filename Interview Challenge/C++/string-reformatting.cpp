// https://codefights.com/interview/4e6LZSessGpKPx3uB
std::string stringReformatting(std::string s, int k) {
    s.erase(std::remove(s.begin(), s.end(), '-'), s.end());

    std::string dash = "-";
    int count = k;
    std::string str = "";
    for(int i = s.length() - 1; i >= 0; --i) {
        str = s[i] + str;
        if(--count == 0 && i != 0) {
            count = k;
            str = dash + str;
        }
    }

    return str;
}
