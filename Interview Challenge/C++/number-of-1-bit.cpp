// https://codefights.com/interview/fDtqXxcFykCQfrqay
int numberOf1Bits(int n) {
    string s = bitset<32>(n).to_string();
    int counter = 0;
    for(auto c:s) {
        if(c == '1') counter++;
    }
    return counter;
}
