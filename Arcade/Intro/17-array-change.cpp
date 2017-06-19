// https://codefights.com/arcade/intro/level-4/xvkRbxYkdHdHNCKjg
int arrayChange(std::vector<int> a) {
    int n = a.size();
    int sum = 0;
    for(int i = 1; i < n; i++) {
        // a[i] have to equal a[i-1] + 1
        if(a[i] <= a[i-1]) {
            int cur = a[i-1] + 1;
            int jump = cur - a[i];
            a[i] += jump;
            sum += jump;
        }
    }
    return sum;
}
