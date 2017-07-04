// https://codefights.com/arcade/intro/level-7/PTWhv2oWqd6p4AHB9
bool checkValid(string a, string b){
    int n = a.size();
    int counter = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) counter++;
    }
    return counter == 1;
}
vector<string> getArr(vector<string> a, string s) {
    bool flag = false;
    vector<string>res;
    for(auto c: a) {
        if(!flag && c == s) {
            flag = true;
            continue;
        }
        res.push_back(c);
    }
    return res;
}
bool process(string a, vector<string> b) {
    // ["aba", "bbb", "bab"]
    // 1) aba (bbb, bab)
    // 1.1 aba -> bbb x
    // 1.2 aba -> bab x
    // 2) bbb (aba, bab)
    // 2.1 bbb -> aba x
    // 2.2 bbb -> bab v
    // 2.2) bab (aba)
    // 2.2.1 bab -> aba x
    // 3) bab (aba, bbb)
    // ...
    int n = b.size();
    if(n == 0) return true;
    bool flag = false;
    for(int i = 0; i < n; i++) {
        if(checkValid(a, b[i])) {
            flag = flag || process(b[i], getArr(b, b[i]));
            if(flag) return flag;
        }
    }
    return flag;
}
bool stringsRearrangement(std::vector<std::string> a) {
    vector<string> b = a;
    int n = a.size();
    bool flag = false;
    for(int i = 0; i < n; i++) {
        flag = flag || process(a[i], getArr(a, a[i]));
        if(flag) return flag;
    }
    return flag;

}
