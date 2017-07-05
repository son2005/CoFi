// https://codefights.com/arcade/intro/level-11/vpfeqDwGZSzYNm2uX
int deleteDigit(int n) {
    string s = std::to_string(n), tmp = "";
    vector<int> arr(s.size(), 0);
    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j < s.size(); j++) {
            if(i==j) continue;
            tmp += s[j];
        }
        arr[i] = stoi(tmp);
        tmp = "";
    }
    
    return *max_element(arr.begin(), arr.end());
}
