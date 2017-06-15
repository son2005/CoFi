// https://codefights.com/interview/MZnrYnavhHmYEwZs8
bool tripletSum(int x, std::vector<int> a) {
    int total = (int) a.size();
    std::sort(a.begin(), a.end());
    bool result = false;
    for(int i = 0; i < total; i++){
        int l = i + 1;
        int r = total - 1;
        while(l < r){
            int sum = a[i] + a[l] + a[r];
            if(sum == x) {
                return true;
            }
            else if (sum < x) l++;
            else r--;
        }
    }
    return result;
}
