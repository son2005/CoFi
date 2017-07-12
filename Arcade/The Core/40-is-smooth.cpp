// https://codefights.com/arcade/code-arcade/list-forest-edge/3LmZafR9wMCWpdgra
bool isSmooth(std::vector<int> arr) {
    int n = arr.size();
    int mid = n / 2;
    if(arr.front() == arr.back()) {
        if(n&1) return arr.back() == arr[mid];
        else return arr.back() == (arr[mid] + arr[mid+1]);
    }
    return false;
}
