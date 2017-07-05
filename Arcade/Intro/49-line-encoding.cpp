// https://codefights.com/arcade/intro/level-11/o2uq6eTuvk7atGadR
std::string lineEncoding(std::string s) {
    string res = "", tmp = string{s[0]};
    for(int i = 1; i < s.size(); i++) {
        if(tmp[0] != s[i]) {
            if(tmp.size() == 1) res += tmp;
            else res += std::to_string(tmp.size()) + tmp[0];
            tmp = s[i];
            continue;
        }
        tmp += s[i];
    }

    if(tmp.size() == 1) res += tmp;
    else res += std::to_string(tmp.size()) + tmp[0];

    return res;
}
