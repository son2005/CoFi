// https://codefights.com/interview/TPxvfH3RYn2SatY8C
int pairsSum(std::vector<int> a) {
    int n = a.size();
    int count = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(i==j) continue;
            int sum = a[i] + a[j];
            auto found = find(a.begin(), a.end(), sum);
            if(found != a.end()) count++;
        }
    }
    return count;
}
