// https://codefights.com/arcade/code-arcade/labyrinth-of-nested-loops/EQSjA5PRfyHueeNkj
int isSumOfConsecutive2(int n) {
    vector<int> arr(n,0);
    for(int i = 1; i <= n; i++) arr[i-1] = i;

    int start = 0, lSum = arr[start], counter = 0;
    for(int i = 1; i < n/2 + 1; i++) {
        lSum += arr[i];
        while(lSum > n) lSum -= arr[start++];
        if(lSum == n) {
            counter++; lSum -= arr[start++];
        }
    }
    return counter;
}
