// https://codefights.com/arcade/intro/level-5/veW5xJednTy4qcjso
void splitS(string s, vector<string> &a){
    auto found = s.find(".");
    while(found != string::npos) {
        a.push_back(s.substr(0, found));
        s = s.substr(found+1);
        found = s.find(".");
    }
    a.push_back(s);
}
bool isNan(string s){
    for(auto c:s) if(!isdigit(c)) return false;
    return true;
}
bool isIPv4Address(std::string s) {
    vector<string> a;
    splitS(s, a);
    if(a.size() != 4) return false;
    for(auto c: a) cout << c << " ";
    for(auto c: a) {
        cout << c << endl;
        if(!isNan(c) || c == "") return false;
        int num = stoi(c);
        if(num < 0 || num > 255) return false;

    }
    return true;
}
