// https://codefights.com/interview/Qut6cbvXDJHPb3AzT
std::string amendTheSentence(std::string s) {
    string res = string{tolower(s[0])};
    int n = s.length();
    for(int i = 1; i < n; ++i) {
        char c = s[i];
        string space = "";
        if(isupper(c)) {
            space = " ";
            c = tolower(c);
        }
        res += space + c;
    }
    return res;
}
