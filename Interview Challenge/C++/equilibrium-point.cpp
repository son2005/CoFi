// https://codefights.com/interview/L5Mfr72ZSs8CJvyuA
int equilibriumPoint(std::vector<int> arr) {
    int n = arr.size();
    if(n==1) return 1;
    int sum = 0;
    for(int i=0;i<n;i++) sum+=arr[i];

    int leftsum = 0;
    for(int i=0;i<n;i++) {
        sum -= arr[i];
        if(leftsum == sum) return i+1;
        leftsum += arr[i];
    }
    return -1;
}
