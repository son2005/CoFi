// https://codefights.com/arcade/intro/level-12/sCpwzJCyBy2tDSxKW
std::string messageFromBinaryCode(std::string code) {
    int numBit = 8;
    string res;
    while(code.length()) {
        res += char(stoi(code.substr(0, numBit), 0 , 2));
        code = code.substr(numBit);
    }
    return res;
}
