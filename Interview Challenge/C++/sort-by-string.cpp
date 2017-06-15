// https://codefights.com/interview/myCQFF3mJ9nx7z6cJ
std::string sortByString(std::string s, std::string t) {
    std::string res = "";
    while(s.size() > 0) {
        for(auto c : t) {
            for(int i = 0; i < s.length(); i++){
                if(c == s[i]) {
                    res += s[i];
                    s.erase(s.begin() + i);
                    goto next;
                }
            }
        }
        next:;
    }
    return res;
}
