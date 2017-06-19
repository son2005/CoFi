// https://codefights.com/arcade/intro/level-3/JKKuHJknZNj4YGL32
int commonCharacterCount(std::string s1, std::string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int m = s1.size();
    int n = s2.size();
    int j = 0;
    int counter = 0;
    for(int i = 0; i < m; i++) {
        int j = 0;
        while(j < n) {
            if(s1[i] == s2[j]) {
                counter++;
                s2.erase(s2.begin() + j);
                break;
            }
            j++;
        }
    }
    return counter;
}
