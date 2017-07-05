// https://codefights.com/arcade/intro/level-12/s9qvXv4yTaWg8g4ma
std::string longestWord(std::string text) {
    string res, tmp;
    for(auto&&c:text) {
        if(isalpha(c)) {
            tmp+=c;
            continue;
        }
        if(res.length() < tmp.length()) res = tmp;
        tmp = "";
    }
    if(res.length() < tmp.length()) res = tmp;
    return res;
}
