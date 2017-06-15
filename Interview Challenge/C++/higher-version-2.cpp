// https://codefights.com/interview/sJ4xmzNKNTtMTSBbP
void convertStringToArr(string s, vector<int> &arr) {
    int n = s.length();
    int i = 0;
    while(i < n) {
        if(s[i] == '.') break;
        i++;
    }
    arr.push_back(stoi(s.substr(0, i)));
    if(i == n) return;
    convertStringToArr(s.substr(i+1), arr);
}
int higherVersion2(std::string ver1, std::string ver2) {
    vector<int> arr1, arr2;
    convertStringToArr(ver1, arr1);
    convertStringToArr(ver2, arr2);
    // for(auto a : arr1) cout << a << " ";
    // cout << endl;
    // for(auto a : arr2) cout << a << " ";

    for(int i = 0; i < arr1.size(); i++) {
        if(arr1[i] == arr2[i]) continue;
        else if(arr1[i] > arr2[i]) return 1;
        else return -1;
    }
    return 0;
}
