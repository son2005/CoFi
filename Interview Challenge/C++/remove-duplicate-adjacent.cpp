// https://codefights.com/interview/DT3wiw6t5mdjc2d2w
std::string removeDuplicateAdjacent(std::string s) {
    vector<int> arr;
    while(1) {
        arr.clear();
        for(int i = 0; i < s.size(); i++) {
            arr.push_back(1);
        }
        for(int i = 1; i < s.size(); i++) {
            if(s[i-1] == s[i]) {
                arr[i-1] = 0;
                arr[i] = 0;
            }
        }

        bool hasDup = false;
        for(auto num : arr) {
            if(!num) {
                hasDup = true;
                break;
            }
        }
        
        if(!hasDup) break;

        string tmp = "";
        for(int i = 0; i < s.size(); i++) {
            if(arr[i]) tmp += s[i];
        }
        s=tmp;
    }
    return s;
}
