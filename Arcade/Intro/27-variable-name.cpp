// https://codefights.com/arcade/intro/level-6/6Wv4WsrsMJ8Y2Fwno
bool variableName(std::string name) {
    // Can't start with digits
    if(isdigit(name[0])) return false;
    for(auto &&c:name) {
        if(ispunct(c) && c != '_') return false;
        if(isspace(c)) return false;
    }
    return true;
}
