// https://codefights.com/interview/7xqHvuKXT2oBJ26iq
int singleNumber(std::vector<int> nums) {
    if(nums.size() == 1) return nums[0];

    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i+=2) {
        if(nums[i] != nums[i + 1]) {return nums[i];}
    }

    return 0;
}
