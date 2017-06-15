// https://codefights.com/interview/3DXoNeZgGABTF3uLv
bool happyNumber(int n) {
    vector<int> nums;
    int loop = 100;
    while(loop-- > 0) {
        string tmp = to_string(n);
        n = 0;
        for(auto c:tmp) {
            int v = c - '0';
            n += v * v;
        }
        if(n==1) return true;
    }
    return false;
}
