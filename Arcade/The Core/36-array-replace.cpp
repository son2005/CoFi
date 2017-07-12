// https://codefights.com/arcade/code-arcade/list-forest-edge/mCkmbxdMsMTjBc3Bm
std::vector<int> arrayReplace(std::vector<int> a, int ele, int rep) {
    for(auto &&i:a) if(i == ele) i = rep;
    return a;
}
