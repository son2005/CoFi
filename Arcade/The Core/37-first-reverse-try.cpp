// https://codefights.com/arcade/code-arcade/list-forest-edge/ND8nghbndTNKPP4Tb
std::vector<int> firstReverseTry(std::vector<int> arr) {
    if(arr.size() > 1)
        std::swap(arr[0], arr[arr.size() - 1]);
    return arr;
}
