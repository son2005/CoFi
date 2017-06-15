// https://codefights.com/interview/MthonrDiNxzE8MChQ
int countByte(string str) {
    int count = 0;
    for(auto s : str) {
        if(s == '1') count++;
        else break;
    }
    if(count == 1) count = -1;
    else if(count > 1) count--;
    return count;
}
int countSeq(std::vector<string> strs) {
    int count = 0;
    bool first = true;
    for(s : strs) {
        if(first) {
            first = false;
            continue;
        }
        if(s[0] == '1' && s[1] == '0') count++;
        else break;
    }
    return count;
}
bool streamValidation(std::vector<int> stream) {
    std::vector<string> strs;
    for(auto s : stream) {
        strs.push_back( std::bitset<8>(s).to_string() );
    }
    while(strs.size() > 0) {
        int len = (int)strs.size();
        int byte = countByte(strs[0]);
        int seq = countSeq(strs);
        // Validate byte
        if(len - byte < 1 || byte != seq) return false;
        strs.erase(strs.begin(), strs.begin() + seq + 1);
    }
    return true;
}
