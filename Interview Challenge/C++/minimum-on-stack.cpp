// https://codefights.com/interview/YAtccEACssMkae47W
std::vector<int> minimumOnStack(std::vector<std::string> operations) {
    vector<int> arr, arrMin;
    for(auto cmd : operations) {
        if(cmd == "min") arrMin.push_back(*min_element(arr.begin(), arr.end()));
        else if(cmd == "pop") arr.pop_back();
        else arr.push_back(stol(cmd.substr(5)));
    }
    return arrMin;
}
