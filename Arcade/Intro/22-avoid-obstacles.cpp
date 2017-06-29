// https://codefights.com/arcade/intro/level-5/XC9Q2DhRRKQrfLhb5
int avoidObstacles(std::vector<int> a) {
    // 3 5 6 7 9
    // 2 3
    // 1 2 4 6 10
    // 11 19 23 32
    // 5 8 9 13 14
    std::sort(a.begin(), a.end());
    int n = a.size();
    int jump = 0;
    for(int i = 2; i <= 40; i++) {
        jump = i;
        bool isValid = true;
        int j = 0, index = 1;
        while(j < n) {
            int tryJump = jump*index;
            if(tryJump == a[j]) {
                isValid = false;
                break;
            }
            else if(tryJump < a[j]) {
                index++;
                continue;
            }
            j++;
        }
        if(isValid) return jump;
    }
    return a[n-1] + 1;
}
