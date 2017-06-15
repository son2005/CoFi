// https://codefights.com/interview/iBm7FsqMWwkc9Sii2
int getTotalLoop(string in, int pos) {
    string loop = "";
    for(int i = pos; i >= 0; i--) {
        if(isdigit(in[i])) loop += in[i];
        else break;
    }
    if(loop.size() > 1)
        std::reverse(loop.begin(), loop.end());
    return stoi(loop);
}

string _decodeRec(string s) {
    auto foundFirst = s.find('[');
    auto foundSecond = s.find(']');
    auto foundNext = s.find('[', foundFirst+1);

    if(foundFirst == string::npos || foundSecond == string::npos) return s;

    while(foundNext != string::npos && foundNext < foundSecond) {
        foundFirst = foundNext;
        foundNext = s.find('[', foundFirst+1);
    }

    string f="", m="", l="";    
    int totalLoop = getTotalLoop(s, foundFirst - 1);
    int totalLen = to_string(totalLoop).length();
    string loopContent = s.substr(foundFirst+1, foundSecond-foundFirst-1);
    while(--totalLoop >= 0) m+=loopContent;
    if(foundFirst - totalLen > 0) f = s.substr(0, foundFirst - totalLen);
    if(foundSecond < s.length() - 1) l = s.substr(foundSecond+1);
    s = f + m + l;
    return _decodeRec(s);
}
std::string decodeString(std::string s) {
    s = _decodeRec(s);
    return s;
}
