// https://codefights.com/arcade/code-arcade/list-forest-edge/APD5T5CybxTtfkdjL
std::vector<int> replaceMiddle(std::vector<int> arr) {
    int n = arr.size();
    int mid = n / 2;
    if(!(n&1)) {
        arr[mid-1] += arr[mid];
        arr.erase(arr.begin() + mid);
    }
    return arr;
}
