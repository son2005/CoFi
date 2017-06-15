// https://codefights.com/interview/BgjZ2duKaYrrjsGcK
std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {
    std::vector<std::vector<int>> b = a;
    int n = a.size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            b[i][j] = a[n - 1 - j][i];
        }
    }
    return b;
}
