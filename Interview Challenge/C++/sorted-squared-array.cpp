// https://codefights.com/interview/GRGRoSLJnKKijH4vA
std::vector<int> sortedSquaredArray(std::vector<int> array) {
    for(int i = 0; i < array.size(); i++) {
        array[i] *= array[i];
    }
    std::sort(array.begin(), array.end());
    return array;
}
