// https://codefights.com/interview/ypWMG9KExz8FbGkYB
std::vector<int> findTheNumbers(std::vector<int> a) {
    sort(a.begin(), a.end());
    int i = a.size() - 1;
    while(a.size() > 2 && i > 0) {
        if(a[i] == a[i-1]) {
            a.erase(a.begin()+i);
            a.erase(a.begin()+i-1);
        }
        i--;
    }

    return a;
}
