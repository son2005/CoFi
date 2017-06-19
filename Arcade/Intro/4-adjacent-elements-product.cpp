// https://codefights.com/arcade/intro/level-2/xzKiBHjhoinnpdh6m
int adjacentElementsProduct(std::vector<int> a) {
    int n = a.size();

    int max = a[0] * a[1];
    for(int i = 2; i < n; i++) {
        int tmp = a[i] * a[i-1];
        if(tmp > max) max = tmp;
    }
    return max;
}
