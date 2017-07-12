// https://codefights.com/arcade/code-arcade/list-forest-edge/GeqSK26bvdrarkGH9
std::vector<int> concatenateArrays(std::vector<int> a, std::vector<int> b) {
    for(auto&&i:b)
        a.push_back(i);
    return a;
}
