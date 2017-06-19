// https://codefights.com/arcade/intro/level-4/cC5QuL9fqvZjXJsW9
std::vector<int> alternatingSums(std::vector<int> a) {
    int n = a.size(), index = 0;
    vector<int> res(2,0);
    for(int i = 0; i < n; i++) {
        res[index] += a[i];
        if(++index==2) index = 0;
    }
    return res;
}
