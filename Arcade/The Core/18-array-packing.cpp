// https://codefights.com/arcade/code-arcade/intro-gates/KeMqde6oqfF5wBXxf
int arrayPacking(std::vector<int> a) {
    // string res;
    // for(auto &&i : a) res = bitset<8>(i).to_string() + res;
    // return stoi(res,0,2);
    int res = 0;
    for(auto it = a.end(); it >= a.begin(); --it)
        res = (res << 8) | *it;
    return res;
}
