// https://codefights.com/interview/zRR9siWo5JjNWj3xX
int findFirstSubstringOccurrence(std::string s, std::string x) {
    int lenS = s.size();
    int lenX = x.size();
    for(int i = 0; i < lenS - lenX + 1; i++) {
        string str = s.substr(i, lenX);
        if(str == x) {
            return i;
        }
    }
    return -1;
}
