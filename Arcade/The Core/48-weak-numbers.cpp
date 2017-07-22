// https://codefights.com/arcade/code-arcade/labyrinth-of-nested-loops/oL7YuygJKtMSNLeJn
std::vector<int> weakNumbers(int n) {
    vector<int> arrDiv(n+1, 0);
    vector<int> arrWeak(n+1, 0);

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= i; j++)
            if(i % j == 0) arrDiv[i]++;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= i; j++)
            if(arrDiv[j] > arrDiv[i]) arrWeak[i]++;

    int m = *std::max_element(arrWeak.begin() + 1, arrWeak.end());
    int c = std::count(arrWeak.begin() + 1, arrWeak.end(), m);
    return vector<int>{m, c};
}
