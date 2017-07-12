// https://codefights.com/arcade/code-arcade/list-forest-edge/bq2XnSr5kbHqpHGJC
int makeArrayConsecutive2(std::vector<int> statues) {
    int max = *std::max_element(statues.begin(), statues.end()),
        min = *std::min_element(statues.begin(), statues.end());
    return max - min - statues.size() + 1;
}
