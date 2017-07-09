// https://codefights.com/arcade/code-arcade/intro-gates/e3zfPNTwTa9qTQzcX
int mirrorBits(int a) {
    // string res = bitset<32>(a).to_string();
    // int i = 0, counter(0);
    // while(i < res.size()) {
    //     if(res[i++] == '0')
    //         counter++;
    //     else break;
    // }
    // // Remove leading 0
    // res = res.substr(counter);
    // std::reverse(res.begin(), res.end());
    // return stoi(res, 0, 2);
    int r(0);
    while(a) {
        r = r << 1 | a & 1;
        a >>= 1;
    }
    return r;
}
