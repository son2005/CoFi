// https://codefights.com/interview/mcuiYxwp2zPN6uDTM
void quickSort(std::vector<int> &nums, int left, int right) {
    int l = left, r = right, tmp,
        pivot = nums[(left+right)/2];

    while(l <= r) {
        while(nums[l]<pivot) l++;
        while(nums[r]>pivot) r--;
        if(l <= r) {
            tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
            l++;r--;
        }
    }

    if(l < right) quickSort(nums, l, right);
    if(left < r) quickSort(nums, left, r);
}
int kthLargestElement(std::vector<int> nums, int k) {
    int n = nums.size();
    quickSort(nums, 0, n - 1);
    return nums[n-k];
}
