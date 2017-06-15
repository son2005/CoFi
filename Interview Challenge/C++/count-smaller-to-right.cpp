// https://codefights.com/interview/bF6Tr6FdRiJSB5qqB
std::vector<int> countSmallerToTheRight(std::vector<int> nums) {
    vector<int> res;
    int n = nums.size(), count = 0;
    if(n==0) return res;
    for(int i = 0; i < n-1; ++i) {
        count = 0;
        for(int j = i+1; j < n; ++j) {
            if(nums[i] > nums[j]) ++count;
        }
        res.push_back(count);
    }
    res.push_back(0);
    return res;
}
