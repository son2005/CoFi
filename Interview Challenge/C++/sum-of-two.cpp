// https://codefights.com/interview/qAL6AiSejoJZRNyox
bool sumOfTwo(std::vector<int> a, std::vector<int> b, int v) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    bool flag = false;
    for(int i : a) {
        if(std::binary_search(b.begin(), b.end(), v - i)) return true;
    }
    return flag;
}
