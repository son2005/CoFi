// https://codefights.com/arcade/intro/level-6/mCkmbxdMsMTjBc3Bm
std::vector<int> arrayReplace(std::vector<int> inputArray, int elemToReplace, int substitutionElem) {
    for(auto &i : inputArray) {
        if(i == elemToReplace) i = substitutionElem;
    }
    return inputArray;
}
