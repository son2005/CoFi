// https://codefights.com/interview/Fup9ymtKqB2yQmX6r
int firstDuplicate(std::vector<int> a) {
    int n = a.size();
    vector<int> b(n+1, 0);
    for(int i = 0; i < n; i++) {
        b[a[i]]++;
        if(b[a[i]] == 2) {
            return a[i];
        }
    }

    return -1;
}
