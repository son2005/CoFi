// https://codefights.com/arcade/intro/level-10/ppZ9zSufpjyzAsSEx
std::string buildPalindrome(std::string st) {
    string s = st,
            tmp="", tmp1="", tmp2="";
    std::reverse(s.begin(), s.end());
    if(s==st) return s;
    int index = 0;

    while(index < st.length()) {
        tmp += st[index++];
        tmp1 = tmp2 = tmp + s;
        std::reverse(tmp2.begin(), tmp2.end());
        if(tmp1 == tmp2) return tmp1;
    }
    return tmp1;
}
