// https://codefights.com/arcade/intro/level-9/AACpNbZANCkhHWNs3
std::string longestDigitsPrefix(std::string s) {
    if(!isdigit(s[0])) return "";
    string res;
    for(auto &&c:s) {
        if(isdigit(c))
            res+=c;
        else
            break;
    }
    return res;
}
