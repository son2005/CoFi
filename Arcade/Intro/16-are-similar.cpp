// https://codefights.com/arcade/intro/level-4/xYXfzQmnhBvEKJwXP
bool areSimilar(std::vector<int> a, std::vector<int> b) {
    int n = a.size();
    int counter = 0;
    int swapPos = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            counter++;
            if(counter == 1) {
                swapPos = i;
            }
            else if (counter == 2) {
                std::swap(a[swapPos], a[i]);
                break;
            }
        }
    }
    return a == b;
}
