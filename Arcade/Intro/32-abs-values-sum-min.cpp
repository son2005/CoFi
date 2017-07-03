// https://codefights.com/arcade/intro/level-7/ZFnQkq9RmMiyE6qtq
int absoluteValuesSumMinimization(std::vector<int> a) {
    int n = a.size();
    if(n==1) return a[0];
    return a[(n-1)/2];
}
