// https://codefights.com/arcade/intro/level-8/3AgqcKrxbwFhd3Z3R
std::vector<int> extractEachKth(std::vector<int> a, int k) {
    vector<int>b;
    for(int i = 0; i < a.size(); i++) {
        if((i+1)%k==0) continue;
        b.push_back(a[i]);
    }
    return b;
}
