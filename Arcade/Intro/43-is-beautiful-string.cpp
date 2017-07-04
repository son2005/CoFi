// https://codefights.com/arcade/intro/level-9/PHSQhLEw3K2CmhhXE
bool isBeautifulString(std::string s) {
    map<char, int> m;
    for(auto &&c : s) m[c]++;
    for(char c = 'a'; c < 'z'; c++) if(m[c] < m[c+1]) return false;
    return true;
}
